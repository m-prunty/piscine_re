/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maprunty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:47:59 by maprunty          #+#    #+#             */
/*   Updated: 2025/10/06 17:58:39 by maprunty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void ft_print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
		ft_putchar(c++);
}

/*
void main()
{
	ft_print_alphabet();
	}
	*/
