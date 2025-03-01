/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 21:28:44 by zouddach          #+#    #+#             */
/*   Updated: 2025/03/01 21:28:44 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(T a, T b)
{
    return (a < b ? a : b);
}

template <typename T>
T max(T a, T b)
{
    return (a > b ? a : b);
}


int main()
{
    int a = 2, b = 3;
    char c = 'c', d = 'd';
    float e = 2.5f, f = 3.5f;
    double g = 2.5, h = 3.5;
    std::string i = "string1", j = "string2";

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "i = " << i << ", j = " << j << std::endl;

    ::swap(a, b);
    ::swap(c, d);
    ::swap(e, f);
    ::swap(g, h);
    ::swap(i, j);

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "i = " << i << ", j = " << j << std::endl;

    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
    std::cout << "min(g, h) = " << ::min(g, h) << std::endl;
    std::cout << "min(i, j) = " << ::min(i, j) << std::endl;

    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
    std::cout << "max(e, f) = " << ::max(e, f) << std::endl;
    std::cout << "max(g, h) = " << ::max(g, h) << std::endl;
    std::cout << "max(i, j) = " << ::max(i, j) << std::endl;

    return 0;
}