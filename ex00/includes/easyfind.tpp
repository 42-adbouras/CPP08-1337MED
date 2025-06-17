/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 16:08:20 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/26 11:48:54 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
typename T::iterator	easyfind( T& vec, int target )
{
	typename T::iterator	temp = std::find(vec.begin(), vec.end(), target);

	if (temp == vec.end())
		throw NotFoundException();
	size_t	pos = std::distance(vec.begin(), temp);
	std::cout << "found: [" << *temp << "], at the index [" << pos << "]." << std::endl;
	return (temp);
}

const char*	NotFoundException::what() const throw() {
	return (RED "[EasyFind::TargetNotFoundException]" RESET);
}