/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 16:08:20 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/21 13:22:23 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
typename T::iterator	easyfind( T& container, int target )
{
	typename T::iterator	temp = std::find(container.begin(), container.end(), target);

	if (temp == container.end())
		throw NotFoundException();
	size_t	pos = std::distance(container.begin(), temp);
	std::cout << "found: [" << *temp << "], at the index [" << pos << "]." << std::endl;
	return (temp);
}

const char*	NotFoundException::what() const throw() {
	return (RED "[EasyFind::TargetNotFoundException]" RESET);
}
