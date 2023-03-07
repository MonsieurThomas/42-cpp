#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename F>
void iter(T *tab, int len, F func)
{
    int i = 0;
    while (i < len)
    {
        func(tab[i], i);
        i++;
    }
}

template <typename T>
void func(T val, int index)
{
   std::cout << "This is content '" << val << "' at index: " << index << std::endl;
}

#endif