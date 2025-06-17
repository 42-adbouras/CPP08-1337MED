/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:52:45 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/17 14:57:54 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Span
{
private:
	std::vector<int>	_vect;
	unsigned int		_size;
	Span( void );
public:
	Span( unsigned int N );
	Span( const Span& right );
	~Span( void );

	Span&	operator=( const Span& right );

	void	addNumber( int number );
	int		shortestSpan( void );
	int		longestSpan( void );

	unsigned int		getSize( void ) const;
	std::vector<int>	getVect( void ) const;

	void	addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
};

std::ostream&	operator<<( std::ostream& COUT, const Span& right );
