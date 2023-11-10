/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:09:44 by yuboktae          #+#    #+#             */
/*   Updated: 2023/10/26 15:05:27 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {

    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR(&str);
    std::string &stinrngREF(str);

    std::cout << "str address: " << &str << std::endl;
    std::cout << "*stringPTR address: " << stringPTR << std::endl;
    std::cout << "&stringREF address: " << &stinrngREF << std::endl;
    std::cout << '\n';
    std::cout << "str value: "<< str << std::endl;
    std::cout << "*stringPTR value: " << *stringPTR << std::endl;
    std::cout << "&stringREF value: " << stinrngREF << std::endl;

    return 0;
}