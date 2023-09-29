/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:42:57 by almorene          #+#    #+#             */
/*   Updated: 2023/09/22 20:11:19 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<strings.h>
#include<stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, int len)
{
	unsigned int	pos;
	unsigned int	i;

	if (!*to_find)
		return ((char *) str);
	pos = 0;
	while (str[pos] != '\0' && (int)pos < len)
	{
		if (str[pos] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[pos + i] == to_find[i]
				&& (int)(pos + i) < len)
				++i;
			if (to_find[i] == '\0')
				return ((char *)&str[pos]);
		}
		++pos;
	}
	return (0);
}
/*int main(void)
{
    const char str[] = "Quepaisa";
    const char to_find[] = "paisa";
    int len;
    len = 8;
    printf("%s",ft_strnstr(str, to_find, len));
    return(0);
}*/
