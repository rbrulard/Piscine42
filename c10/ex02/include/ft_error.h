/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:13:57 by ncolomer          #+#    #+#             */
/*   Updated: 2019/07/17 14:32:02 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERROR_H
# define FT_ERROR_H

int		error(char *program, char *filename);

int		error_message(char *program, char *message);

int		illegal_offset(char *program, char *offset);

int		usage_info(char *program);

#endif
