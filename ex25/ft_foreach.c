/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maprunty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:28:16 by maprunty          #+#    #+#             */
/*   Updated: 2025/10/07 17:38:20 by maprunty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	while(length--)
		f(*tab++);
}

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	main()
{
	int tab[6] = {'1', '2', '3', '4' ,'5', '6'};
	int i = 6;

	ft_foreach(tab, 6, &ft_putchar);

}
