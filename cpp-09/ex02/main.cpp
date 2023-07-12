
#include "PmergeMe.hpp"

template<typename T>
void displayContainer(const T& container, const std::string& containerName) {
    std::cout << containerName << ": ";
    for(typename T::const_iterator it = container.begin(); it != container.end(); ++it)
        std::cout << *it << " ";
    std::cout << "\n";
}

int main(int ac, char **av)
{

    clock_t start = clock();


    if (ac < 2) {
        std::cout << "Error: You must give args, positive number args " << std::endl;
        return 1;
    }
    std::list<int> List;
    std::deque<int> deque;

    std::string Error = "Error";
    

    // int arr[] = {7, 2, 9,6,10,3};
    // int arr_size = 6;
    for(int i = 1; i < ac; i++)
    {
        int num = 0;
        try
        {
            num = std::stoi(av[i]);
        }
        catch(const std::exception& e)
        {
            std::cout << "Error" << std::endl;
            return 0;
        }
        if (num < 0)
        {
            std::cout << "Error" << std::endl;
            return 0;
        }
        List.push_back(num);
        deque.push_back(num);
    }
    // int arr_size = size(unsorted_list)/size(unsorted_list[0]);
    displayContainer(List, "Before");

    // displayContainer(deque, "unsorted_deque");

    clock_t endList = mergeInsertSortList(List);
    clock_t endDeque = mergeInsertSortDeque(deque);
  
    displayContainer(List, "After");

    double durationList = static_cast<double>(endList - start) / CLOCKS_PER_SEC ;
    double durationDeque = static_cast<double>(endDeque - start) / CLOCKS_PER_SEC ;

    std::cout << "Time to process a range of " << List.size() << " elements with std::list : " << durationList << " us" << std::endl;
    std::cout << "Time to process a range of " << deque.size() << " elements with std::deque : " << durationDeque << " us" << std::endl;
    // std::cout << "This is durationDeque " << durationDeque << std::endl;



    // displayContainer(deque, "unsorted_deque_after");

  
    return 0;
}
