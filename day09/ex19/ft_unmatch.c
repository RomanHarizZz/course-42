
int		ft_unmatch(int *tab, int length)
{
	int	index;
	int	i;

	index = 0;
	while (index < length)
	{
		i = 0;
		while ((tab[index] != tab[i] || i == index) && i < length)
			i++;
		if (tab[index] != tab[i])
			return (tab[index]);
		++index;
	}
	return (0);
}
