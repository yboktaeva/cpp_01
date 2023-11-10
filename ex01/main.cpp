/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:22:58 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/03 12:16:13 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {

    int i = -1;
    int n = 10;

    Zombie *z = zombieHorde(n, "Foo");

    while (++i < 10)
        z[i].announce();
    delete [] z;
    return 0;
}