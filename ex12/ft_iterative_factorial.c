/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maprunty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:44:28 by maprunty          #+#    #+#             */
/*   Updated: 2025/10/06 18:48:34 by maprunty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int tmp;

	tmp = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb--)
		tmp *= nb;
	return (tmp);
}
