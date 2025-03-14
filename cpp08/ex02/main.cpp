/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 09:08:52 by zouddach          #+#    #+#             */
/*   Updated: 2025/03/14 09:08:52 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#define green "\033[1;32m"
#define red "\033[1;31m"
#define blue "\033[1;34m"
#define bold "\033[1m"
#define reset "\033[0m"

int main()
{
    std::cout << green << bold << "42 Intra Tests" << reset << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << green << bold << "My Tests" << reset << std::endl;
    MutantStack<int> mstack1;
    mstack1.push(54);
    mstack1.push(157);
    mstack1.push(-3);
    mstack1.push(5);

    MutantStack<int>::iterator it1 = mstack1.begin();
    MutantStack<int>::iterator ite1 = mstack1.end();
    std::cout << "{";
    while (it1 != ite1)
    {
        std::cout << bold << *it1 << (it1 + 1 != ite1 ? ", " : "}\n");
        ++it1;
    }
    std::cout << reset;
    std::cout << red << "Size: " << mstack1.size() << reset << std::endl;
    return 0;
}
