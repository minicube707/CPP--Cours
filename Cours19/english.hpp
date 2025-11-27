
#ifndef ENGLISH_HPP
# define ENGLISH_HPP

# include <string>
# include <iostream>
# include "someone.hpp"

class English : public Someone
{
    using Someone::Someone;
    
    public:
        void sayGoodNight() const noexcept override;

};

#endif

