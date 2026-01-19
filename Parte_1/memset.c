/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:37:13 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/13 15:39:50 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*s_char;

	s_char = (char *) s;
	i = 0;
	while (i < n)
	{
		s_char[i] = c;
		i++;
	}
	return (0);
}
/*
int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
     ft_memset(str + 13, '.', 8*sizeof(char));

    printf("After memset():  %s", str);
    return 0;
}*/
