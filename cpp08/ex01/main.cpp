/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 08:23:53 by zouddach          #+#    #+#             */
/*   Updated: 2025/03/14 08:23:53 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"
# include <time.h>

#define green "\033[1;32m"
#define red "\033[1;31m"
#define blue "\033[1;34m"
#define bold "\033[1m"
#define reset "\033[0m"

int main()
{
    std::cout << green << bold << "42 Intra Tests" << reset << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << green << bold << "My Custom Tests" << reset << std::endl;
    int size = 10000;
    Span mySpan(size);

    std::vector<int> randomNumbers;
    srand(time(0));
    for (int i = 0; i < size; i++) {
        randomNumbers.push_back(rand());
    }

    mySpan.addRangeOfNumbers(randomNumbers.begin(), randomNumbers.end());
    std::cout << bold << "Shortest span: " << mySpan.shortestSpan() << std::endl;
    std::cout << bold << "Longest span: " << mySpan.longestSpan() << std::endl;
    std::cout << bold << blue << "Prove that the span calculation is correct" << reset << std::endl;
    // std::cout << "Shortest span: " << *std::min_element(randomNumbers.begin(), randomNumbers.end()) << std::endl;
    std::cout << bold << red << "For the longest span, we will use the first and last element of the vector [sorted]" << reset << std::endl;
    std::sort(randomNumbers.begin(), randomNumbers.end());
    std::cout << bold << "First element: " << randomNumbers[0] <<  " Last element: " << randomNumbers[size - 1] << std::endl;
    std::cout << bold << "Longest span: " << randomNumbers[size - 1] - randomNumbers[0] << std::endl;
    std::cout << bold << red << "For the shortest span, we will have to check all the elements of the vector [sorted]" << reset << std::endl;
    std::cout << bold << "so will do so with a smaller sorted vector" << std::endl;
    std::vector<int> smallVector(6);
    smallVector[0] = 1;
    smallVector[1] = 4;
    smallVector[2] = 5;
    smallVector[3] = 7;
    smallVector[4] = 9;
    smallVector[5] = 10;
    std::cout << bold << "Shortest span which is the smallest difference between two elements: " << reset << std::endl;
    int min = smallVector[1] - smallVector[0];
    std::cout << bold << red << "Starting with the first two elements: " << smallVector[1] << " - " << smallVector[0] << " = " << min << std::endl;
    for (int i = 1; i < 5; i++) {
        std::cout << bold << "Checking the difference between " << smallVector[i + 1] << " and " << smallVector[i] << std::endl;
        if (smallVector[i + 1] - smallVector[i] < min) {
            min = smallVector[i + 1] - smallVector[i];
            std::cout << red << bold << "New minimum was found: " << min << reset << std::endl;
        }
    }
    std::cout << green << bold << "The shortest span is: " << min << std::endl;
    Span mySpan2(6);
    mySpan2.addRangeOfNumbers(smallVector.begin(), smallVector.end());
    std::cout << "Shortest span: " << mySpan2.shortestSpan() << reset << std::endl;
    return 0;
}