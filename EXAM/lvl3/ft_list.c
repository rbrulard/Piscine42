/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrular <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:07:42 by robrular          #+#    #+#             */
/*   Updated: 2019/07/23 11:12:27 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int size;
	size = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		size ++;
	}
	return (size);
}
