/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:20:03 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/21 13:27:11 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main( void )
{
	std::cout << BLUE "::::::::::::    INTRA'S MAIN    ::::::::::::" RESET << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "Top : " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it  = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(mstack);
	}
	std::cout << BLUE "\n::::::::::::      LIST TEST     ::::::::::::" RESET << std::endl;
	{
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << "Back: " << mstack.back() << std::endl;
		mstack.pop_back();
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::cout << "Size: " << mstack.size() << std::endl;

		std::list<int>::iterator it  = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << BLUE "\n::::::::::::   CONST ITERATOR   ::::::::::::" RESET << std::endl;
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		const MutantStack<int>	const_mstack	= mstack;

		MutantStack<int>::const_iterator	it	= const_mstack.begin();
		MutantStack<int>::const_iterator	ite	= const_mstack.end();

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		
		std::stack<int> s(mstack);
	}
	return 0;
}
