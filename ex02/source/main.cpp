/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:20:03 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/17 21:24:10 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top: "<< mstack.top() << std::endl; // Output: 17
    mstack.pop();
    std::cout << "Size: " << mstack.size() << std::endl; // Output: 1
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl; // Output: 5, 3, 5, 737, 0
        ++it;
    }

    // std::stack<int> s(mstack); // Copy MutantStack into a standard stack
    return 0;
}