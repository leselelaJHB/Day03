void	ft_putchar(char c)

void	ft_putstr(char *str)
{
	char	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i++]);
	}
}
