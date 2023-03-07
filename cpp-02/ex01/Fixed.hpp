#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
    private:
        int _value;
        static const int _bitsInt;
    
    public:
        Fixed();
        Fixed(int const value);
        Fixed(float const value);
        Fixed(Fixed const &src);
        ~Fixed();

        Fixed &operator=(Fixed const &rhs);

        void    setRawBits( int const raw );
        int     getRawBits( void ) const;
        int     toInt(void) const;
        float   toFloat(void) const;
        
};
std::ostream &operator<<(std::ostream &temp, Fixed const &rhs);

#endif