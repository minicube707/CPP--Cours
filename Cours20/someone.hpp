
#ifndef SOMEONE_HPP
# define SOMEONE_HPP

# include <string>
# include <iostream>

class Someone
{
    public:
        Someone() = delete;
        Someone(const std::string& name) noexcept ;
        virtual void sayGoodNight() const noexcept ;

    protected:
        std::string _name;
    
};

#endif

