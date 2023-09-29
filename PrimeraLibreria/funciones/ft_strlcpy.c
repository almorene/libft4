/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:44:43 by almorene          #+#    #+#             */
/*   Updated: 2023/09/22 21:08:48 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

size_t	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
		dest[i] = src[i];
		i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*int main (void)
{
	char dest[10];
	char src[] = "hola";
	unsigned int size;
	size = 3;
	printf("%u\n", ft_strlcpy(dest, src, size));
	printf ("%s", dest);
	return(0);
}*/
