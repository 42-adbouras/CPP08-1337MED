/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:44:34 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/17 15:03:36 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main( void )
{
	Span				span(5);
	std::vector<int>	vect = {6, 3, 17, 9, 11};

	span.addRange(vect.begin(), vect.end());
	std::cout << span << std::endl;
	
	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);

	std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;
	std::cout << "Longest  Span: " << span.longestSpan() << std::endl;
}