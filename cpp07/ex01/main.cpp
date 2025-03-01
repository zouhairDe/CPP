/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 21:49:47 by zouddach          #+#    #+#             */
/*   Updated: 2025/03/01 21:49:47 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

template <typename T>
void print(T const &x)
{
    std::cout << x << std::endl;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    char b[] = {'a', 'b', 'c', 'd', 'e'};
    float c[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    double d[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::string e[] = {"string1", "string2", "string3", "string4", "string5"};

    std::cout << "Integers:" << std::endl;
    iter(a, 5, print);
    std::cout << "Chars:" << std::endl;
    iter(b, 5, print);
    std::cout << "Floats:" << std::endl;
    iter(c, 5, print);
    std::cout << "Doubles:" << std::endl;
    iter(d, 5, print);
    std::cout << "Strings:" << std::endl;
    iter(e, 5, print);
    std::cout << "Empty array:" << std::endl;
    iter(e, 0, print);
    return (0);
}