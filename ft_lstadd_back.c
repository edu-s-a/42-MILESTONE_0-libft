/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:07:06 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/24 13:06:04 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;
	if (!lst || !new)
		return (NULL);
	current = *lst;
	while(current->next != NULL)
		current = current->next;
	current->next = current;
	new->next = NULL;
}