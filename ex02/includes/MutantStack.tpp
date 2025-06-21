/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 09:33:17 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/21 12:01:32 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<class T>
MutantStack<T>::MutantStack( void ) { return ; }

template<class T>
MutantStack<T>::MutantStack( const MutantStack& right ) : std::stack<T>(right)
{
	*this = right;
}

template<class T>
MutantStack<T>::~MutantStack( void ) { return ; }

template<class T>
MutantStack<T>&	MutantStack<T>::operator=( const MutantStack& right )
{
	if (this != &right) {
		this->c = right.c;
	}
	return (*this);
}

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::begin( void )
{
	return (this->c.begin());
}

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::end( void )
{
	return (this->c.end());
}

template<class T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin( void ) const
{
	return (this->c.begin());
}

template<class T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end( void ) const
{
	return (this->c.end());
}
