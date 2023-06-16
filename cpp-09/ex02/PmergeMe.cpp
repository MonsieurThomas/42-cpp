#include "PmergeMe.hpp"

std::list<int> merge_insert_sort_list(std::list<int> unsorted)
{
    std::list<int> sorted;

    for (std::list<int>::iterator it = unsorted.begin(); it != unsorted.end(); ++it)
    {
        std::list<int>::iterator insert_num = std::upper_bound(sorted.begin(), sorted.end(), *it);
        sorted.insert(insert_num, *it);
    }
    return sorted;
}

std::deque<int> merge_insert_sort_deque(std::deque<int> unsorted)
{
    std::deque<int> sorted;

    for (std::deque<int>::iterator it = unsorted.begin(); it != unsorted.end(); ++it)
    {
        std::deque<int>::iterator insert_num = std::upper_bound(sorted.begin(), sorted.end(), *it);
        sorted.insert(insert_num, *it);
    }
    return sorted;
}