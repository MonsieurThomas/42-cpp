/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:51:00 by romainthoma       #+#    #+#             */
/*   Updated: 2023/06/04 18:59:24 by romainthoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "You must give only 1 arg" << std::endl;
        return 1;
    }

    RPN rpn;
    try {
        int resultat = rpn.calculate(argv[1]);
        std::cout << resultat << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    return 0;
}
