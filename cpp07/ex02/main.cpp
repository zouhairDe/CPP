/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 22:53:28 by zouddach          #+#    #+#             */
/*   Updated: 2025/03/13 22:40:57 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> arr(5);
    Array<int> arr2(5);
    Array<int> arr3(5);

    for (unsigned int i = 0; i < arr.size(); i++)
    {
        arr[i] = i;
        arr2[i] = i + 1;
        arr3[i] = i + 2;
    }

    for (unsigned int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
        std::cout << arr2[i] << " ";
        std::cout << arr3[i] << std::endl;
    }

    try
    {
        arr[6] = 5;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        arr[-1] = 5;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Reading from a const Array:" << std::endl;
    const Array<int> arr4(5);
    for (unsigned int i = 0; i < arr4.size(); i++)
    {
        std::cout << arr4[i] << " ";
    }

    return 0;
}