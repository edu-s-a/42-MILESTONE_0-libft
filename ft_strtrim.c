/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:15:04 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/21 19:55:15 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//--------------------------CHANGE STRLEN TO FT_STRLEN---------------------------

#include <stdio.h>
#include <bsd/string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char *trim;
	size_t	start;
	size_t	end;
	
	start = 0;
	while(s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);	
	while(end > start && ft_strchr(set, s1[end -1]))
		end--;
	if (end <= start)
		return(ft_strdup(""));
	trim = malloc(end - start + 1);
	if (!trim)
		return(NULL);
	ft_strlcpy(trim, &s1[start], end - start + 1);
	return (trim);

}

int	main(void)
{
	char const	*s1 = " Hello World   ";
	char const	*set = " Hello";
	char		*trimmed;

	trimmed = ft_strtrim(s1, set);
	printf("Original: '%s'\n", s1);
	printf("Trimmed: '%s'\n", trimmed);
	free(trimmed);
	return (0);
}
