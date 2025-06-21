/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:44:34 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/21 12:50:28 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main( void )
{
	std::cout << BLUE "::::::::::::    INTRA'S MAIN    ::::::::::::" RESET << std::endl;
	{
		Span	sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest  Span: " << sp.longestSpan()  << std::endl;
	}
	std::cout << BLUE "\n::::::::::::  OVERFLOW ATTEMPT  ::::::::::::" RESET << std::endl;
	{
		try {
			int					values[] = { 6, 3, 17, 9, 11 };
			Span				sp(5);
			std::vector<int>	vect;

			for (int i = 0; i < 5; i++) {
				vect.push_back(values[i]);
			}
			sp.addRange(vect.begin(), vect.end());

			Span	spCopy(sp);
			std::cout << "sp     >> " << sp     << std::endl;
			std::cout << "spCopy >> " << spCopy << std::endl;
			
			std::cout << "\nShortest Span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest  Span: " << sp.longestSpan() << "\n" << std::endl;

			sp.addNumber(1337);
		} catch (std::exception& e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << BLUE "\n:::::::::::: SPAN FAILS ATTEMPT ::::::::::::" RESET << std::endl;
	{
		Span	s(1);
		s.addNumber(1337);

		try {
			std::cout << "Shortest Span: " << s.shortestSpan() << std::endl;
		} catch (std::exception& e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		try {
			std::cout << "Longest  Span: " << s.longestSpan()  << std::endl;
		} catch (std::exception& e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	return (0);
}
