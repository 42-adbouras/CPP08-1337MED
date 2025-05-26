/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 16:08:20 by adbouras          #+#    #+#             */
/*   Updated: 2025/05/26 10:01:11 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
void	easyfind( std::vector<T>& vec, T target )
{
	typename std::vector<T>::iterator temp = std::find(vec.begin(), vec.end(), target);
	if (temp != vec.end()) {
		size_t	pos = std::distance(vec.begin(), temp);
		std::cout << "found: [" << *temp << "], at the index [" << pos << "]." << std::endl;
	} else {
		throw NotFoundException();
	}
}

const char*	NotFoundException::what() const throw() {
	return (RED "[EasyFind::TargetNotFoundException]" RESET);
}