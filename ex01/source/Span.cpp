/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 13:19:31 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/17 15:02:52 by adbouras         ###   ########.fr       */
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
		return ; // throw
	this->_vect.push_back(number);
}
int		Span::shortestSpan( void )
{
	if (this->_vect.size() < 2)
		return (0); // throw
	std::vector<int>	sortedVect = this->_vect;
	std::sort(sortedVect.begin(), sortedVect.end());
	int	_short = sortedVect[1] - sortedVect[0];
	for (size_t i = 1; i < sortedVect.size() - 1; ++i) {
		int	diff = sortedVect[i + 1] - sortedVect[i];
		_short = (diff < _short) ? diff : _short;
	}
	return (_short);
}

int		Span::longestSpan( void )
{
	if (this->_vect.size() < 2)
		return (0); // throw
	int	_min = *std::min_element(this->_vect.begin(), this->_vect.end());
	int	_max = *std::max_element(this->_vect.begin(), this->_vect.end());
	return (_max - _min);
}

void	Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	size_t rangeSize = std::distance(start, end);

	if (this->_vect.size() + rangeSize > this->_size) {
		return ; // throw
	}
	this->_vect.insert(this->_vect.end(), start, end);
}

std::ostream& operator<<(std::ostream& COUT, const Span& right)
{
    std::vector<int> temp = right.getVect();

	if (temp.empty()) {
		COUT << "[SpanIsEmpty]" << std::endl;
		return (COUT);
	}
    COUT << "[";
    for (unsigned int i = 0; i < right.getSize(); i++) {
        COUT << temp[i];
        if (i < right.getSize() - 1)
            COUT << ", ";
    }
    COUT << "]";
    return (COUT);
}