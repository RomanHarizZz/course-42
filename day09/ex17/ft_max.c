
int	ft_max(int *tab, int length)
{
	int	max;
	int	i;

	i = 0;
	max = 0;
	while (i < length)
	{
		if (tab[i] > max)
			max = tab[i];
		++i;
	}
	return (max);
}
