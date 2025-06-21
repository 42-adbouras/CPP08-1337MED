/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 13:19:31 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/21 13:21:29 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int N ) : _size(N) { return ; }

Span::Span( const Span& right )
{
	*this = right;
}

Span::~Span( void ) { return ; }

Span&	Span::operator=( const Span& right )
{
	if (this != &right) {
		this->_size = right.getSize();
		this->_vect = right.getVect();
	}
	return (*this);
}

unsigned int	Span::getSize( void ) const
{
	return (this->_size);
}

std::vector<int>	Span::getVect( void ) const
{
	return (this->_vect);
}

void	Span::addNumber( int number )
{
	if (this->_vect.size() >= this->_size)
		throw (Span::SpanException());
	this->_vect.push_back(number);
}

int		Span::shortestSpan( void )
{
	if (this->_vect.size() < 2)
		throw (Span::SpanException());

	std::vector<int>	sortedVect = this->_vect;
	std::sort(sortedVect.begin(), sortedVect.end());

	int	_short = sortedVect[1] - sortedVect[0];

	for (size_t i = 1; i < sortedVect.size() - 1; i++) {
		int	diff = sortedVect[i + 1] - sortedVect[i];
		_short = (diff < _short) ? diff : _short;
	}
	return (_short);
}

int		Span::longestSpan( void )
{
	if (this->_vect.size() < 2)
		throw (Span::SpanException());

	int	_min = *std::min_element(this->_vect.begin(), this->_vect.end());
	int	_max = *std::max_element(this->_vect.begin(), this->_vect.end());

	return (_max - _min);
}

void	Span::addRange(v_iterator start, v_iterator end)
{
	size_t rangeSize = std::distance(start, end);

	if (this->_vect.size() + rangeSize > this->_size)
		throw (Span::SpanException());
	this->_vect.insert(this->_vect.end(), start, end);
}

const char*	Span::SpanException::what() const throw()
{
	return ("[Span::ExceptionThrown]");
}

std::ostream& operator<<(std::ostream& COUT, const Span& right)
{
    std::vector<int>	temp = right.getVect();
	unsigned int		size = right.getSize();

	if (temp.empty())
    	return (COUT);
    COUT << "[";
    for (unsigned int i = 0; i < size; i++) {
        COUT << temp[i];
        if (i < size - 1)
            COUT << ", ";
    }
    COUT << "]";
    return (COUT);
}
