/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:49:25 by romainthoma       #+#    #+#             */
/*   Updated: 2023/07/12 17:33:12 by romainthoma      ###   ########.fr       */
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

clock_t mergeInsertSortList(std::list<int>& List);
clock_t mergeInsertSortDeque(std::deque<int>& deque);

#endif

