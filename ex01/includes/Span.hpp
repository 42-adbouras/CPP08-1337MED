/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:52:45 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/21 12:50:08 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <exception>

#define BLUE	"\033[1;34m"
#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define RESET	"\033[0m"

typedef std::vector<int>::iterator v_iterator;

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

	class	SpanException : public std::exception {
	public:
		const char*	what() const throw();
	};

	void	addRange(v_iterator start, v_iterator end);
};

std::ostream&	operator<<( std::ostream& COUT, const Span& right );
