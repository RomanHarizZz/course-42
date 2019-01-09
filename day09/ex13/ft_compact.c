
int	ft_compact(char **tab, int length)
{
	int	index;
	int	size;

	index = 0;
	size = length;
	while (index < length)
	{
		if (!tab[index])
			size--;
	}
	return (size);
}
