/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 08:07:02 by zouddach          #+#    #+#             */
/*   Updated: 2025/03/14 08:07:02 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main()
{
    std::vector<int> vec(6, 0);
    vec[3] = 69;
    vec[4] = 10;
    try
    {
        std::cout << *easyfind(vec, 69) << std::endl;
        std::cout << *easyfind(vec, 10) << std::endl;
        std::cout << *easyfind(vec, 110) << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}