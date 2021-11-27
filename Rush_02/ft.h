/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:42:06 by faventur          #+#    #+#             */
/*   Updated: 2021/11/27 17:20:09 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>

void	        ft_putchar(char c);
void	        ft_swap(int *a, int *b);
void	        ft_putstr(char *str);
void	        ft_putnbr(int nb);
unsigned int	ft_strlen(char *str);
char			*ft_strstr(char *str, char *to_find);
int		        ft_strcmp(char *s1, char *s2);
void    		ft_check_args(char *str);

#endif