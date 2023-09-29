/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:03:58 by almorene          #+#    #+#             */
/*   Updated: 2023/09/22 14:33:52 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>

void	*ft_memset(void *str, int value, size_t num)
{
	size_t	z;
	char	*str1;
	size_t	i;

	str1 = str;
	z = value;
	i = 0;
	while (i < num)
	{
		str1[i] = (unsigned char)z;
		i++;
	}
	return (str1);
}
/*int main (void)
{
	char str[20] ="hola sarita";

	 int value;
	 value = '1';
	 size_t num;
	 num = 20;


	 printf("%s",ft_memset(str, value, num));
	 return(0);
}*/
