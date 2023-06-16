/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:49:25 by romainthoma       #+#    #+#             */
/*   Updated: 2023/04/21 13:51:41 by romainthoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <list>
#include <deque>
#include <algorithm>
#include <iterator>
#include <ctime>

std::list<int> merge_insert_sort_list(std::list<int> unsorted);
std::deque<int> merge_insert_sort_deque(std::deque<int> unsorted);

#endif

