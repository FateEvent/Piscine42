/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fab's Version.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:37:47 by faventur          #+#    #+#             */
/*   Updated: 2022/01/30 20:31:32 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
    write(1, "z", 1);
    write(1, "\n", 1);
    return (0);
}
