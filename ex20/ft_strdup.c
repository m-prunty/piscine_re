/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maprunty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 07:22:21 by maprunty          #+#    #+#             */
/*   Updated: 2025/10/07 07:35:50 by maprunty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *dup;
	char *ret;

	dup = (void *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dup)
		return (NULL) ;
	ret = dup;
	while(*src)
		*dup++ = *src++;
	*dup = '\0';
	return (ret);
}

/*
int main()
{
	printf("%s\n", ft_strdup("jakshkjd"));
	printf("%s\n", ft_strdup(""));
	printf("%s\n", ft_strdup("\0"));
	printf("%s\n", ft_strdup("uasydi\najosd"));
	}
*/
