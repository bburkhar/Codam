#include <stdio.h> 
#include <unistd.h>


int		ft_strlen(char *str)
{
	int 	len;

	len = 0; 
	while (str[len] != '\0')
		++len; 
	return (len);
}

int		main(int ac, char **av)
{
	if (ac != 2)
		write(1, "Fout", 4);
	else 
		printf("%d\n", ft_strlen(av[1]));
	return (0);
}
