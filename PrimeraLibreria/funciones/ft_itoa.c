/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:04:44 by almorene          #+#    #+#             */
/*   Updated: 2023/09/29 18:49:31 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_itoa(int n)
{
	int	a;
	int	i;
	int	resultado;

	i = 0;
	a = 1;
	resultado = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		a *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = resultado * 10 + (str[i] + '0');
		i++;
	}
	return (resultado * a);
}
int main(void)
{
	char str[50] = "-1234a";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return(0);
}
