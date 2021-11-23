/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:44:16 by lblanche          #+#    #+#             */
/*   Updated: 2021/11/23 17:23:57 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define UTILS_H

void	ft_fill_full_left(int *tab, int i);
void	ft_fill_full_right(int *tab, int i);
void	v_fill(int *tab, int i);
void	ft_fill_col(int *tab, int i);
void	ft_check_v_cons(int *tab, int *cons);
void	ft_check_h_cons(int *tab, int *cons);
void	ft_fill(int *tab, int *cons);

#endif
