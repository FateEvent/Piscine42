/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:25:32 by stissera          #+#    #+#             */
/*   Updated: 2021/11/21 17:51:53 by lblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FUNCTION_H
# define FUNCTION_H

int		ft_check_row(int null_index, int *tab, int value);
int		ft_check(char *str);
int		*ft_atoi(char *str, int *sizemax);
int		*ft_init(int size);
void	ft_fill(int *tab, int *consigne);
int		*ft_null_index(int *tab, int size);
int		ft_verify_tab(int *tab);
int		ft_double_check(int *tab, int *consigne, int size);
int		ft_solve(int *tab, int *consgine, int *index_null, int SIZEMAX);
void	ft_print_tab(int *tab, int *consigne, int size);
void	ft_step_one(int *consigne, int size);
void	ft_step_two(int *tab, int *consigne, int size);
void	ft_step_third(int *consigne, int size);
void	ft_putchar(char c);
void	ft_fill_full_left(int *tab, int i);
void	ft_fill_full_right(int *tab, int i);
void	v_fill(int *tab, int i);
void	ft_fill_col(int *tab, int i);
void	ft_check_v_cons(int *tab, int *cons);
void	ft_check_h_cons(int *tab, int *cons);
void	ft_fill(int *tab, int *cons);

#endif
