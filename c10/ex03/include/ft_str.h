/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:50:04 by ncolomer          #+#    #+#             */
/*   Updated: 2019/07/17 18:39:36 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H

char	*ft_strcpy(char *dest, char *src);

char	*ft_ncpy(char *dest, char *src, unsigned int size);

char	*ft_strcat(char *dest, const char *src);

int		ft_strcmp(char *s1, char *s2);

int		ft_ncmp(char *s1, char *s2, unsigned int n);

#endif
