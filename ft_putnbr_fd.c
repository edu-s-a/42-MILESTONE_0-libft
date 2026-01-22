/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:46:24 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/22 15:47:31 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	un;
	char			c;

	if (n < 0)
	{
		write(fd, "-", 1);
		un = -n;
	}
	else
		un = n;
	if (un >= 10)
		ft_putnbr_fd(un / 10, fd);
	c = (un % 10) + '0';
	write(fd, &c, 1);
}
