  1 /* ************************************************************************** */
  2 /*                                                                            */
  3 /*                                                        :::      ::::::::   */
  4 /*   first_word2.c                                      :+:      :+:    :+:   */
  5 /*                                                    +:+ +:+         +:+     */
  6 /*   By: abarrett <marvin@42.fr>                    +#+  +:+       +#+        */
  7 /*                                                +#+#+#+#+#+   +#+           */
  8 /*   Created: 2018/08/16 04:03:46 by abarrett          #+#    #+#             */
  9 /*   Updated: 2018/08/16 04:27:51 by abarrett         ###   ########.fr       */
 10 /*                                                                            */
 11 /* ************************************************************************** */
 12
 13 #include <unistd.h>
 14
 15 int     main(int argc, char **argv)
 16 {
 17     int i;
 18
 19     i = 0;
 20     if (argc != 2)
 21     {
 22         write(1, "\n", 1);
 23         return (0);
 24     }
 25     while (argv[1][i])
 26     {
 27         if (argv[1][i] == ' ' || argv[1][i] == '\t')
 28         {
 29             i++;
 30         }
 31         write(1, &argv[1][i], 1);
 32         i++;
 33         if (argv[1][i] == ' ' || argv[1][i] == '\t')
 34         {
 35             break ;
 36         }
 37     }
 38         write(1, "\n", 1);
 39     return (0);
 40 }