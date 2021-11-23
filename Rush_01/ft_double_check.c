#include "function.h"
int ft_double_check(int *tab, int *con, int size);

int ft_double_check(int *tab, int *con, int size)
{
	int tab2tab[size][size]; // create a 2 dimensions array
	int i; // index first dimension
	int j; // index second dimension
	int k; // index values to test
	int z; // index instructions given
	int s; // index support!!
	int v; // view value

	i = 0;
	j = 0;
	k = 0;
	while (j < size)
	{
		while (i < size)
		{
			tab2tab[i][j] = tab[k];
			i++;
			k++;
		}
		i = 0;
		j++;
	}
	
	z = 0;
	
	/*************************************/
	/*       up       */
	
	i = 0;
	j = 0;
	s = 0;
	v = 1;
	while (i < size)
	{
		while (s < size - 1) // only 3 verifications
		{
			if (tab2tab[i][j] > tab2tab[i][s + 1] && tab2tab[i][j] !=0 )
				s++;
			else
			{
				if ((s - j) >= 1)
				{
					j = s + 1;
					s++;
					v++;
				}
				else
				{
					j++;
					s++;
					v++;
				}
			}
		}
		if (v == con[z])
		{
			i++;
			z++;
			s = 0;
			j = 0;
			v = 1;
		}
		else
			return (0);
	}
	
	/*************************************/
	/*      down      */
	
	i = 0;
	j = 3;
	s = 3;
	v = 1;
	while (i < size)
	{
		while (s > 0) // only 3 verifications
		{
			if (tab2tab[i][j] > tab2tab[i][s - 1]  && tab2tab[i][j] !=0 )
				s--;
			else
			{
				if (j - (s - 1) >= 1)
				{
					j = s - 1;
					s--;
					v++;
				}
				else
				{
					j--;
					s--;
					v++;
				}
			}
		}
		if (v == con[z])
		{
			i++;
			z++;
			s = 3;
			j = 3;
			v = 1;
		}
		else
			return (0);
	}
	
	/****************************************/
	/*       left       */
	
	i = 0;
	j = 0;
	s = 0;
	v = 1;
	while (j < size)
	{
		while (s < size - 1) // only 3 verifications
		{
			if (tab2tab[i][j] > tab2tab[s + 1][j]  && tab2tab[i][j] !=0 )
				s++;
			else
			{
				if ((s - i) >= 1)
				{
					i = s + 1;
					s++;
					v++;
				}
				else
				{
					i++;
					s++;
					v++;
				}
			}
		}
		if (v == con[z])
		{
			j++;
			z++;
			s = 0;
			i = 0;
			v = 1;
		}
		else
			return (0);
	}
	
	/*******************************************/
	/*       right       */
	
	i = 3;
	j = 0;
	s = 3;
	v = 1;
	while (j < size)
	{
		while (s > 0) // only 3 verifications
		{
			if (tab2tab[i][j] > tab2tab[s - 1][j] && tab2tab[i][j] !=0  )
				s--;
			else
			{
				if (i - (s - 1) >= 1)
				{
					i = s - 1;
					s--;
					v++;
				}
				else
				{
					i--;
					s--;
					v++;
				}
			}
		}
		if (v == con[z])
		{
			j++;
			z++;
			s = 3;
			i = 3;
			v = 1;
		}
		else
			return (0);
	}
	
	return (1);
}
