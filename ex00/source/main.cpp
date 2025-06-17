/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 16:33:54 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/26 12:36:31 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main( void )
{
	{
		try {
			std::vector<int> nums;
			nums.push_back(1), nums.push_back(2),
			nums.push_back(3), nums.push_back(4),
			nums.push_back(5), nums.push_back(6),
			nums.push_back(7), nums.push_back(8),
			nums.push_back(9), nums.push_back(0);
			::easyfind(nums, 0);
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try {
			std::list<int> nums;
			nums.push_back(1), nums.push_back(2),
			nums.push_back(3), nums.push_back(4),
			nums.push_back(5), nums.push_back(6),
			nums.push_back(7), nums.push_back(8),
			nums.push_back(9), nums.push_back(0);
			::easyfind(nums, 9);
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}