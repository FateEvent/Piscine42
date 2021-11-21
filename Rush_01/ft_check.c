/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 10:50:03 by tvanbael          #+#    #+#             */
/*   Updated: 2021/11/21 10:48:33 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

 /*Fonction permettant de traiter l'entree bash, de verifier sa conformitee */

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_str_stop_no_space_num(char *str);
int		ft_true_version_num(char *str);
int		ft_square_root(char *str);
int		ft_rm_space(char *str);

int ft_check(char *str)     			/* Fonction principale*/
{
	int index;

	if (argc == 2)
	{
 		index = ft_strlen(argv[1]);
		{
			if (index == 31)
			{
				if ft_true_version_num(str[index])
				{
					if (ft_rm_space(str[index]) ==     )

					return (1);
				}
				return (0);
			}
			return (0);

		}
		else
			ft_putstr("ERROR 2");
		return (0);
	}
	else
		ft_putstr("ERROR");
}

int	ft_strlen(char *str) /* controle de la longueur de chaine de caracteres */
{
	int index;

	index = 0;

	while (str[index] != '\0')
	{
		index++;
	}
	return index;
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

int	ft_str_stop_no_space_num(char *str) /* fonction de verification des caracteres*/
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 0) && (str[i] <= 31))
			return (0);
		if ((str[i] >= 33) && (str[i] <= 47))
			return (0);
		if ((str[i] >= 58) && (str[i] <= 127))
			return (0);
		i++;
	}
	return (1);
}

/*int	ft_square_root(char *strwsp) 				 Fonction racine caree
{
	int index;

	index = 0;

	while (strwsp[index] != '\0')
	{
		index++;
	}
	if (index
}
*/
int ft_true_version_num(char *str) 			/* fonction verification si*/
										/*format chiffre espaces est respectee*/
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 0) && (str[i] <= n))
		{
			i = i + 2;
		}
		else
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
			if (str[i] == 32)
			{
				i = i + 2;
			}
		return (0);
	}
	return(1);
}

int	ft_rm_space(char *str)
{
	char *strwsp;

	int i;
	int j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		strwsp[j] = str[i];
		i = i + 2;
		j++;
	}

	return(strwsp);
} /* voir si besoin de de mettre '\0' a la fin de [] strwsp*/

int main()
{
	int *str = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
		ft_check(str);
	return(0);
}
