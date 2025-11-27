
#ifndef INDONESIAN_HPP
# define INDONESIAN_HPP

# include <string>
# include <iostream>
# include "someone.hpp"

class Indonesian : public Someone
{
    using Someone::Someone;
    
    public:
        void sayGoodNight() const noexcept override;

};

#endif

