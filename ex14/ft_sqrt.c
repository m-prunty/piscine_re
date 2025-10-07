/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maprunty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:08:15 by maprunty          #+#    #+#             */
/*   Updated: 2025/10/06 19:22:38 by maprunty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_sqrt(int nb)
{
	int tmp;

	tmp = 1;
	while (tmp * tmp <= nb)
	{
		if (tmp * tmp == nb)
			return (tmp);
		else 
			tmp++;
	}
	return (0);
}

/*
int main()
{
	printf("%i",ft_sqrt(64));
	printf("%i",ft_sqrt(0));
	printf("%i",ft_sqrt(1));
}
*/
