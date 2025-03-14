/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:23:25 by zouddach          #+#    #+#             */
/*   Updated: 2025/02/25 17:37:59 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base * generate(void)
{
	int i = rand() % 3;
	if (i == 0)
		return new A();
	else if (i == 1)
		return new B();
	else
		return new C();
}

void	identify(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "This is an A instance" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "This is a B instance" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "This is a C instance" << std::endl;
	else
		std::cout << "Unknoown instance" << std::endl;
	return ;
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "This is an A instance" << std::endl;
	}
	catch(const std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "This is a B instance" << std::endl;
		}
		catch(const std::exception &e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "This is a C instance" << std::endl;
			}
			catch(const std::exception &e)
			{
				std::cout << "Unknoown instance" << std::endl;
			}
		}
	}
	return ;
}

int main()
{
	srand(time(NULL));
	std::cout << "First random instance" << std::endl;
	Base *base = generate();
	identify(base);
	identify(*base);
	delete base;
	
	std::cout << "Second random instance" << std::endl;
	base = generate();
	identify(base);
	identify(*base);
	delete base;
	
	std::cout << "Last random instance" << std::endl;
	base = generate();
	identify(base);
	identify(*base);
	delete base;
	
	std::cout << "Testing with a known instance" << std::endl;
	A a;
	identify(&a);
	identify(a);
	std::cout << "Testing with an unknown instance" << std::endl;
	Base b;
	identify(&b);
	identify(b);
	return 0;
}