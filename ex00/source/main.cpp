/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 16:33:54 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/21 12:34:03 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main( void )
{
	std::cout << BLUE "::::::::::::  NONEXISTING  TARGET  ::::::::::::" RESET << std::endl;
	{
		try {
			std::vector<int> nums;
			for (int i = 0; i < 100; i++) {
				nums.push_back(i + 1);
			}
			::easyfind(nums, 1337);
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << BLUE "\n::::::::::::    EXISTING TARGET    ::::::::::::" RESET << std::endl;
	{
		try {
			std::list<int> nums;
			for (int i = 0; i < 100; i++) {
				nums.push_back(i + 1);
			}
			::easyfind(nums, 42);
			::easyfind(nums, 37);
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
