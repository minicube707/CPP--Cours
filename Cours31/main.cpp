#include <iostream>
#include <chrono>

int main()
{
    std::chrono::year y{2019};
    std::chrono::month m{3};
    std::chrono::day d{28};
    std::cout << d << "/" << m << "/" << y << std::endl;

    std::chrono::days ds{365};
    std::cout << ds << std::endl;

    std::chrono::hours h{21};
    std::chrono::hours hb{10};
    std::chrono::minutes min{42};
    std::chrono::seconds s{42};
    std::cout << h << ":" << min << ":" << s << std::endl;
    std::cout << h - hb << ":" << min << ":" << s << std::endl;

    auto today{std::chrono::system_clock::now()};
    std::cout << "Il est " << today << std::endl;

    std::chrono::zoned_time date{"Europe/Paris", std::chrono::system_clock::now()};
    std::cout << "Il est " << date << std::endl;

    /*
        %D, %F
        %d, %m, %Y
        %H, %M, %S
        %A, %a, %B, %b
    */

    auto formattedDate{std::format("{:%D}", today)};
    std::cout << "Date formate " << formattedDate << std::endl;
    formattedDate = {std::format("{:%F}", today)};
    std::cout << "Date formate " << formattedDate << std::endl;
    formattedDate = {std::format("{:%d/%m/%Y}", today)};
    std::cout << "Date formate " << formattedDate << std::endl;
    formattedDate = {std::format("{:%H:%M:%S}", today)};
    std::cout << "Date formate " << formattedDate << std::endl;
    formattedDate = {std::format("{:%A %a %B %b}", today)};
    std::cout << "Date formate " << formattedDate << std::endl;
    return (0);
}