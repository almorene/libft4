/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:10:33 by almorene          #+#    #+#             */
/*   Updated: 2023/09/28 22:06:12 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*substr;
	size_t	i;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	i = 0;
	if (start + len == s_len + 1 || len > s_len)
		len = s_len - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (0);
	while (i++ < start)
		s++;
	ft_strlcpy(substr, (char *)s, len + 1);
	return (substr);
}
/*int main (void)
{
	char const *s = "hola, amigo mio";
	unsigned int start = 2;
	size_t len = 20;

	printf("%s" ,ft_substr(s, start, len));
	return(0);
}*/
