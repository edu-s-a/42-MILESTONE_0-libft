/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:05:18 by edsole-a          #+#    #+#             */
/*   Updated: 2026/02/03 13:10:08 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*s_char;

	s_char = (char *) s;
	i = 0;
	while (i < n)
	{
		s_char[i] = '\0';
		i++;
	}
	return ;
}
/*
#include <stdio.h>
int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '0'
    ft_bzero(str + 13, 8*sizeof(char));
    
    printf("After memset():  %s", str);
    return 0;
}*/
