/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:22:09 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/03 18:00:57 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
    
    if (argc != 2) {

        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return 1;
    }
    
    Harl harl;
    
    harl.complain(argv[1]);

    return 0;
}