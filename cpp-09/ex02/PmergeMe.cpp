#include "PmergeMe.hpp"

void mergeList(std::list<int>& List, std::list<int>::iterator start, std::list<int>::iterator mid, std::list<int>::iterator end) {
    std::list<int> temp;
    std::list<int>::iterator left = start;
    std::list<int>::iterator right = mid;

    (void) List;
    while(left != mid && right != end) {
        if(*left <= *right){
            temp.push_back(*left);
            ++left;
        } else {
            temp.push_back(*right);
            ++right;
        }
    }
    
    while(left != mid) {
        temp.push_back(*left);
        ++left;
    }

    while(right != end) {
        temp.push_back(*right);
        ++right;
    }

    std::copy(temp.begin(), temp.end(), start);
}

void mergeSortList(std::list<int>& List, std::list<int>::iterator start, std::list<int>::iterator end) {
    if(start != end && std::next(start) != end) {
        std::list<int>::iterator mid = start;
        std::advance(mid, std::distance(start, end) / 2);
        mergeSortList(List, start, mid);
        mergeSortList(List, mid, end);
        mergeList(List, start, mid, end);
    }
}

clock_t mergeInsertSortList(std::list<int>& List)
{
    mergeSortList(List, List.begin(), List.end());
    clock_t end = clock();
    return (end);
}

//deque part

void mergeDeque(std::deque<int>& deque, std::deque<int>::iterator start, std::deque<int>::iterator mid, std::deque<int>::iterator end) {
    std::deque<int> temp;
    std::deque<int>::iterator left = start;
    std::deque<int>::iterator right = mid;

    (void) deque;
    while (left != mid && right != end) {
        if (*left <= *right) {
            temp.push_back(*left);
            ++left;
        } else {
            temp.push_back(*right);
            ++right;
        }
    }

    while (left != mid) {
        temp.push_back(*left);
        ++left;
    }

    while (right != end) {
        temp.push_back(*right);
        ++right;
    }

    std::copy(temp.begin(), temp.end(), start);
}

void mergeSortDeque(std::deque<int>& deque, std::deque<int>::iterator start, std::deque<int>::iterator end) {
    if (start != end && std::next(start) != end) {
        std::deque<int>::iterator mid = start;
        std::advance(mid, std::distance(start, end) / 2);
        mergeSortDeque(deque, start, mid);
        mergeSortDeque(deque, mid, end);
        mergeDeque(deque, start, mid, end);
    }
}

clock_t mergeInsertSortDeque(std::deque<int>& deque) {
    mergeSortDeque(deque, deque.begin(), deque.end());
    clock_t end = clock();
    return (end);
}
