/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:21:18 by romainthoma       #+#    #+#             */
/*   Updated: 2023/04/21 12:12:59 by romainthoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <iterator>

class RPN 
{
	public:
		RPN();
		~RPN();
		RPN(RPN const &copy);
		RPN &operator=(RPN const &rhs);
		
		int calculate(const std::string& expression);
		bool isSpecial(const std::string& token);
		int calculNumber(const std::string& operation, int a, int b);
};

#endif