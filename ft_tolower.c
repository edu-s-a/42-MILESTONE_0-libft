/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:02:01 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/23 16:53:47 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}
/*int	main ()
{
	int	c = ' ';
	printf("%c\n", ft_tolower(c));
	printf("%c\n", tolower(c));

	return (0);
}*/
