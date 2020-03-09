/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:50:04 by ncolomer          #+#    #+#             */
/*   Updated: 2019/07/17 16:04:28 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTIL_H
# define FT_UTIL_H

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcat(char *dest, char *src);

int		ft_strcmp(char *s1, char *s2);

int		add_char_to_buffer(char *buffer, char cbuf, int length, int limit);

int		ft_atoi(char *str);

#endif
