/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:58:31 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/22 20:03:49 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_free_split(char **res, int i)
{
	while (i >= 0)
	{
		free(res[i]);
		i--;
	}
	free(res);
}

int	ft_word_count(const char *s, char c, int i)
{
	int	n_word;

	n_word = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			n_word++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (n_word);
}

char	**ft_set_words(int n_word, char **res, const char *s, char c)
{
	int	i;
	int	pos;
	int	chars;

	chars = 0;
	pos = 0;
	i = 0;
	while (pos < n_word)
	{
		chars = 0;
		while (s[i] == c)
			i++;
		while (s[i + chars] && s[i + chars] != c)
			chars++;
		res[pos] = malloc(sizeof(char) * (chars + 1));
		if (!res[pos])
			return (ft_free_split(res, pos), NULL);
		ft_strlcpy(res[pos], &s[i], chars + 1);
		pos++;
		i = i + chars;
	}
	res[pos] = NULL;
	return (res);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		n_word;
	char	**res;

	i = 0;
	n_word = ft_word_count(s, c, i);
	res = (char **) malloc(sizeof(char *) * (n_word + 1));
	if (!res)
		return (NULL);
	ft_set_words(n_word, res, s, c);
	return (res);
}
/*
int main(void)
{
    char **res;
    int i;

    i = 0;
    res = ft_split("Hello there, General Kenobi", ' ');

    while (res[i])
    {
        printf("%s\n", res[i]);
        free(res[i]);
        i++;
    }
    free(res);
    return (0);
}
	*/