/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacruype <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 10:51:36 by lacruype          #+#    #+#             */
/*   Updated: 2019/07/21 19:11:51 by robrular         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef	struct	s_stock
{
	int		nb;
	char	*value;
}				t_stock;

int				ft_atoi(char *str);
void			ft_cutnbr(t_stock *stru, char *nbr);
void			ft_putstr(char *str);
void			ft_putchar(char c);
t_stock			*ft_struct(char **tab, char *str);
void			ft_display(t_stock *stru, int nbr);
char			*ft_trimmed(char *str);
int				ft_size(char *str);
char			*ft_word_num(char *str);
int				get_num_from_s(char *str);
char			*ft_dup(char *src, int size);
int				ft_strlen(char *str);
char			**ft_create_tab_tab(char *str);
char			**ft_place(char **tab, char *str);
char			**ft_split(char **tab, char *str);
int				ft_cmpt_line(char *str);
char			*ft_create_str(char *fichier);
int				ft_cmpt_f(char *fichier);
int				ft_numbers(int a, int b);
int				ft_recursive_power(int nb, int power);
int				ft_is_number(char *str);
int				count_minus(char *str);
int				check_space(char *str);
int				ft_is_in_charset(char c, char *charset);
int				ft_nombre_mots(char *str, char *charset);
char			**ft_taille_mots(char *str, char **tab, char *charset);
char			**ft_place_mots(char *str, char **tab, char *charset);
int				ft_bidouille(char *str);

#endif
