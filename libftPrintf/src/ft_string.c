
#include "includes/libftprintf.h"

int	ft_string(char *p)
{
	int	count;

	count = 0;
	if (p == NULL)
		p = "(null)";
	while (*p != '\0')
	{
		if(write(1, p, 1) != 1)
			return (-1);
		p++;
		count++;
	}
	return (count);
}