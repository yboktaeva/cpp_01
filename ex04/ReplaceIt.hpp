/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceIt.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:07:06 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/03 12:00:06 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACEIT_HPP
# define REPLACEIT_HPP

# include <iostream>
# include <string>
# include <fstream>

class ReplaceIt {

public:
    ReplaceIt();
    ~ReplaceIt();
    
    static std::string replace(std::string line, std::string s1, std::string s2);
};

#endif
