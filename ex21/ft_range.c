/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maprunty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 07:39:08 by maprunty          #+#    #+#             */
/*   Updated: 2025/10/07 09:07:50 by maprunty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range(int min, int max)
{
	int *range;
	int len;
	int i;

	i = -1;
	len = max - min ;
	if (len > 0)
	{
		range = (int *)malloc(sizeof(int) * len);
		if (range)
		{
			while(++i < len)
				range[i] = min + i;
			return (range);
		}
	}
	return (0);
}

void	print_range(int *range)
{
	if (range)
	{
	while (*range)
		printf("%i, ", *range++);
	}
	printf("\n");
}

int main()
{
	print_range(ft_range(3, 9));
	print_range(ft_range(9, 9));
	print_range(ft_range(23, 9));
	print_range(ft_range(9, 23));
	print_range(ft_range(-3, 9));
	print_range(ft_range(-3, -9));
	}
