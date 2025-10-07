/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maprunty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:40:01 by maprunty          #+#    #+#             */
/*   Updated: 2025/10/07 18:33:54 by maprunty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	if (*tab)
	{
		while (*tab)
		{
			if (f(*tab++))
				i++;
		}
	}
	return (i);
}
/*
int ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int ft_lowercase(char *s)
{
	while (s[0])
	{
		if (ft_islower(*s))
			s++;
		else
			return (0);
	}
	return (1);
}

int main()
{
	char *tab[] = {"aa", "Ba", "a3", "dd", "eE", "Fe", 0};
	printf("%i",ft_count_if(tab, &ft_lowercase));
}
*/
