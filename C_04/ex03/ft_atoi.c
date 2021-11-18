/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:45:13 by faventur          #+#    #+#             */
/*   Updated: 2021/11/18 22:19:58 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isspace(int _c);
int ft_atoi(char *str);

int ft_atoi(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        if (ft_isspace(str[i]) == 0)
        {
            
        }
    }

}

int ft_isspace(int _c)
{
    if (_c >= '\t' && _c <= '\r' || _c == ' ')
        return (1);
    else
        return (0);
}