/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:46:21 by almorene          #+#    #+#             */
/*   Updated: 2023/09/26 18:24:20 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src) + size);
	while (dest[i] && i < size)
		i++;
	k = i;
	while (src[j] && i < size -1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (k < size)
			dest[i] = '\0';
	return (k + ft_strlen(src));
}
/*int main(void)
{
    char dest[50] = "hola, ";
    const char source[5]= "mun";
    size_t size;
    size = 4;
    printf("%zu\n", strlcat(dest, source, size));
    printf("%zu\n", ft_strlcat(dest, source, size));
    
    return(0);
}*/
