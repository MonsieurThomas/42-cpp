#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
# include <vector>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _v;

    public:
        Span();
        Span(unsigned int n);
        ~Span();
        Span(const Span &copy);
        Span    &operator=(Span const &instance);
        void        addNumber(int i);
        int         shortestSpan();
        int         longestSpan();
        void        addMultiple(int start, int end);
        void        printingVec();
};

#endif