
int	ft_button(int i, int j, int k)
{
	if ((i > k && i < j) || (i > j && i < k))
		return (i);
	if ((j > k && j < i) || (j > i && j < k))
		return (j);
	if ((k > i && k < j) || (k > j && k < i))
		return (k);
	return (0);
}
