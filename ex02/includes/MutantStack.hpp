/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 20:54:37 by adbouras          #+#    #+#             */
/*   Updated: 2025/06/21 13:26:50 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <iterator>

#define BLUE	"\033[1;34m"
#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define RESET	"\033[0m"

template<class T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack( void );
	MutantStack( const MutantStack& right );
	~MutantStack( void );

	MutantStack&	operator=( const MutantStack& right );

	typedef typename std::stack<T>::container_type::iterator		iterator;
	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

	iterator		begin( void );
	iterator		end( void );

	const_iterator	begin( void ) const;
	const_iterator	end( void ) const;
};

#include "MutantStack.tpp"
