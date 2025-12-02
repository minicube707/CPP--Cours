
#include "time.hpp"

/*
    bool operator==(a, b){...}
    
    bool operator!=(a, b)
    {
        retunr !(a == b)
    }
*/

namespace jc
{
    time::time(std::size_t h, std::size_t m, std::size_t s): hours(h), minutes(m), secondes(s)
    {}

    time time::operator+(const time& other) const
    {
        return time{hours + other.hours, minutes + other.minutes, secondes + other.secondes};
    }

    time operator+(const time& t, int i)
    {
        return time{t.hours, t.minutes, t.secondes + i};
    }

    time operator+(int i, const time& t)
    {
        return t + i;
    }

    std::ostream& operator<<(std::ostream& os, const time& t)
    {
        os << t.hours << ":" << t.minutes << ":" << t.secondes;
        return os;
    }

}
