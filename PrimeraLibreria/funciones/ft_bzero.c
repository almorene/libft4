/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:05:28 by almorene          #+#    #+#             */
/*   Updated: 2023/09/21 19:00:45 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<strings.h>
#include<unistd.h>
#include<stdio.h>

void	ft_bzero(void *s, size_t size)
{
	int		i;
	char	*a;

	i = 0;
	a = (char *) s;
	while (size > 0)
	{
		a[i] = 0;
		i++;
		size--;
	}
}
/*int main(void)
{
	char s[10] = "hola amigo";
	size_t n;

	n = 1;
    //printf("%s\n", ft_bzero(s);
    bzero(s, n);
	printf("%s\n", s);
	//bzero(s, n);
	//write(1, s, n);
	//write(1, "\n", 1);
	ft_bzero(s,n);
	printf("%s\n", s);
	return(0);
}*/
