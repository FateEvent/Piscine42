int		ft_strlen(char *str);
char	*ft_strlcat(char *dest, char *src, unsigned int size);

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
    int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (i < nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int    counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
