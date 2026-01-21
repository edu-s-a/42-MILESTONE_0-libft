/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:41:06 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/21 19:55:12 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	ft_atoi(const char *nptr);

int 	main(void)
{
	char	str[]="07";
	printf("ft_atoi: %d\n", ft_atoi(str));
	printf("atoi: %d\n", atoi(str));
	return (0);
}
*/
int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (9 <= nptr[i] && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}
