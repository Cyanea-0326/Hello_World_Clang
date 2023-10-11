#include <unistd.h>

int	my_strlen(char *s)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

void	put_string(char *s)
{
	if (!s)
	{
		write(2, "argument error\n", 15);
		return ;
	}
	write(1, s, my_strlen(s));
	write(1, "\n", 1);
}

int	main(void)
{
	char	*str = "Hello World";

	put_string(str);
	return (0);
}