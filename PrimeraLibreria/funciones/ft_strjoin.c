/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:26:14 by almorene          #+#    #+#             */
/*   Updated: 2023/09/29 18:50:22 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	/*int i;
    int j;
    int k;

    i = 0;
	j = 0;
     while (s1[i] != '\0')
    {
        i++;
    }
    while (s2[j] != '\0')
    {
        j++;
    }
    
	char * str;
	str = (char *)malloc(sizeof(i + j + 1) * sizeof(char)); //len(suma de i y j))
	if (!str)
		return(NULL);
    ft_strlcpy(str, (char *)s1, 1);
	ft_strlcat(str, (char *)s2, 1);
	return (str);
	
	return (0);*/

    char	*str;
	int		len;
	int i;
	int j;

	//if (s1 != '\0' && s2 != '\0')
	//{
		len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (!str|| !s2 || !s1)
			return (NULL);
		//ft_strlcpy(str, (char *)s1, 1);
		i = 0;
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		//ft_strlcat(str, (char *)s2, 1);
		j = 0;
		while (s2[j] != '\0')
			str[i++] = s2 [j++];
		str[i] = '\0';
		return (str);
	//}
	
}
/*int main (void)
{
    char const *s1 = "hola";
    char const *s2 = "amigo";
    printf("%s", ft_strjoin(s1, s2));
    return (0);
}*/
