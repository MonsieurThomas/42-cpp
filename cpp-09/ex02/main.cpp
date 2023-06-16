#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2) {
        std::cout << "Error: You must give args, positive number args " << std::endl;
        return 1;
    }

    std::list<int> unsorted_list;
    std::deque<int> unsorted_deque;
	int num;

    for (int i = 1; i < ac; ++i) {
        num = atoi(av[i]);
        if (num <= 0) {
            std::cout << "Error" << std::endl;
            return 1;
        }
        unsorted_list.push_back(num);
        unsorted_deque.push_back(num);
    }

    std::cout << "Before: ";
    for (int i = 1; i < ac; ++i) 
        std::cout << atoi(av[i]) << " ";
	std::cout << std::endl;

    std::clock_t start_list = std::clock();
    std::list<int> sorted_list = merge_insert_sort_list(unsorted_list);
    std::clock_t end_list = std::clock();

    std::clock_t start_deque = std::clock();
    std::deque<int> sorted_deque = merge_insert_sort_deque(unsorted_deque);
    std::clock_t end_deque = std::clock();

    std::cout << "After: ";
    for (std::list<int>::iterator it = sorted_list.begin(); it != sorted_list.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

    double list_time = 1000.0 * (end_list - start_list) / CLOCKS_PER_SEC;
    double deque_time = 1000.0 * (end_deque - start_deque) / CLOCKS_PER_SEC;

    std::cout << "Time to process a range of " << sorted_list.size() << " elements with std::list: " << list_time << " ms" << std::endl;
    std::cout << "Time to process a range of " << sorted_deque.size() << " elements with std::deque: " << deque_time << " ms" << std::endl;

    return 0;
}
