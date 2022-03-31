/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirbouzidi <samirbouzidi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:33:22 by samirbouzid       #+#    #+#             */
/*   Updated: 2022/03/31 23:19:01 by samirbouzid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {

    Array<int> tabint(4);
    tabint[0] = 9; tabint[1] = 6; tabint[2] = 10; tabint[3] = 56;
    std::cout << tabint.size() << std::endl;
    for (int i = 0; i < tabint.size(); ++i)
    std::cout << "[" << i << "]: " << tabint[i] << "\n";
    try
    {
        std::cout << tabint[8];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;

    Array<std::string> tabstring(3);
    tabstring[0] = "Salut"; tabstring[1] = "la"; tabstring[2] = "fammille";
    std::cout << tabint.size() << std::endl;
    for (int i = 0; i < tabstring.size(); ++i)
    std::cout << "[" << i << "]: " << tabstring[i] << "\n";
    try
    {
        std::cout << tabstring[3];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}
