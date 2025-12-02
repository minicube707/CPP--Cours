
#include <iostream>
#include <memory>

int change_value1(int n)
{
    n = 3141592;
    return (n);
}

void change_value2(int *n)
{
    *n = 2001;
}

void change_value3(int &n)
{
    n = 404;
}

void print(const int &n)
{
    const int *Pn = &n;  // Pn pointe vers n
    const int &Rn = n;   // Rn réfère n

    std::cout << "Valeur (n):                                   " << n << std::endl;
    std::cout << "Adresse (&n):                                 " << &n << std::endl;
    std::cout << "Valeur du pointeur (Pn):                      " << Pn << std::endl;
    std::cout << "Valeur pointee par le pointeur (*Pn):         " << *Pn << std::endl;
    std::cout << "Adrresse de l'addresse (&Pn):                 " << &Pn << std::endl;
    std::cout << "Valueur de la reference (Rn):                 " << Rn << std::endl;
    std::cout << "Adresse referencee par la reference (&Rn):    " << &Rn << std::endl;
    std::cout << ""  << std::endl;
}

int main()
{
    int n = 42;

    std::cout << "Valeur initial" << std::endl;
    print(n);

    n = 2048;
    std::cout << "Changement par initialisation" << std::endl;
    print(n);

    n = change_value1(n);
    std::cout << "Changement par retour" << std::endl;
    print(n);

    change_value2(&n);
    std::cout << "Changement par pointeur" << std::endl;
    print(n);

    change_value3(n);
    std::cout << "Changement par reference" << std::endl;
    print(n);

    /*Pointeur null*/
    int* Nullptr = nullptr;
    std::cout << "Pointeur null (nullptr): " << Nullptr << std::endl;

    /*
        Smart pointeur:
        -unique_ptr:
        -shared_ptr:
        -weak_ptr:
    */

    /*unique_ptr*/
    /*Possède l’unicité de possession → impossible à copier.
    Tu peux le modifier directement : *ptr = 73.*/
    std::unique_ptr<int> ptr {std::make_unique<int>(256)};
    std::cout << "Pointeur unique: " << *ptr << std::endl;
    *ptr = 73;
    std::cout << "Pointeur unique: " << *ptr << std::endl;
    std::cout << ""  << std::endl;

    if (ptr)
        std::cout << "J'existe" << std::endl;
    else
        std::cout << "Je n'existe pas" << std::endl;
    ptr.reset(nullptr);
     if (ptr)
        std::cout << "J'existe" << std::endl;
    else
        std::cout << "Je n'existe pas" << std::endl;
    /*Ne pas pas etre copie: std::unique_ptr<int> ptr2 {ptr} -> Crash*/

    /*shared_ptr*/
    /*Comptage de références automatique.
    Copiable → plusieurs shared_ptr peuvent pointer vers le même objet.
    Tant qu'au moins un shared_ptr existe, l’objet reste vivant.*/
    std::shared_ptr<int> sptr1 {std::make_shared<int>(-273)};
    std::cout << "Pointeur shared: " << *sptr1 << std::endl;
    *sptr1 = 0;
    std::cout << "Pointeur shared: " << *sptr1 << std::endl;
    std::cout << "Proprietaire(s) de la resource: " << sptr1.use_count() << std::endl;
    std::shared_ptr<int> sptr2 {sptr1};
    std::cout << "Pointeur shared: " << *sptr2 << std::endl;
    std::cout << "Proprietaire(s) de la resource: " << sptr1.use_count() << std::endl;
    std::cout << "Proprietaire(s) de la resource: " << sptr2.use_count() << std::endl;
    sptr1.reset();
    std::cout << "Proprietaire(s) de la resource: " << sptr2.use_count() << std::endl;
    std::cout << ""  << std::endl;

    /*weak_ptr*/
    /*Ne possède pas l’objet → pas de comptage de références.
    Doit être transformé en shared_ptr pour être utilisé → via .lock()
    On ne peut pas faire *wptr1.*/
    std::weak_ptr<int> wptr1 {sptr1};

    if (auto locked = wptr1.lock()) // locked est un shared_ptr
        std::cout << "Pointeur weak: " << *locked << std::endl;
    else
        std::cout << "C'est non" << std::endl;

    
    return 0;
}