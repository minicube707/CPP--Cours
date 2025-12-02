
#ifndef TIME_HPP
# define TIME_HPP

    #include <ostream>

    // <type_retour> operatorX(...)
    
    namespace jc
    {
        class time
        {
            public:
                time(std::size_t h, std::size_t m, std::size_t s);
                time operator+(const time& other) const;

            private:
                std::size_t hours;
                std::size_t minutes;
                std::size_t secondes;

            friend std::ostream& operator <<(std::ostream& os, const time& t);

            friend time operator+(const time& t, int sec); // time + int
            friend time operator+(int sec, const time& t); // int + time
        };

        time operator+(const time& t, int sec); // time + int
        time operator+(int sec, const time& t); // int + time
    }

    #endif