/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:30:18 by almorene          #+#    #+#             */
/*   Updated: 2023/09/28 15:16:09 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size_s1;

	if (!s1 || !set)
		return (0);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	size_s1 = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[size_s1]) && size_s1 != 0)
		size_s1--;
	return (ft_substr((char *)s1, 0, size_s1 +1));
}
