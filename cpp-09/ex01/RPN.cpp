/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:48:15 by romainthoma       #+#    #+#             */
/*   Updated: 2023/06/04 19:09:18 by romainthoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(RPN const &copy)
{
	*this = copy;
}

RPN &RPN::operator=(RPN const &rhs)
{
	 if (this != &rhs) { 
		;
	 }
	return *this;
}

bool RPN::isSpecial(const std::string& token) {
    if (token == "+" || token == "-" || token == "*" || token == "/")
		return true;
	return false;
}

int RPN::calculNumber(const std::string& operation, int a, int b) {
    if (operation == "+") return a + b;
    if (operation == "-") return a - b;
    if (operation == "*") return a * b;
    if (operation == "/") {
        if (b == 0)
			throw std::exception();
        return a / b;
    }
    throw std::exception();
}

int RPN::calculate(const std::string& expression) {
    std::istringstream iss(expression);
    std::stack<int> pile;

    for (std::string token; iss >> token;) {
        std::cout << "this is token = " << token << std::endl;
        if (isSpecial(token))
        {
            if (pile.size() < 2)
                throw std::exception();
            int b = pile.top();
			pile.pop();
            int a = pile.top();
			pile.pop();
            int resultat = calculNumber(token, a, b);
            pile.push(resultat);
        }
        else
            pile.push(std::stoi(token));
    }

    if (pile.size() != 1) {
        throw std::exception();
    }

    return pile.top();
}