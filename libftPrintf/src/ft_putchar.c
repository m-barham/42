
#include "includes/libftprintf.h"

size_t	ft_putchar(const char c)
{
	write(1, &c, 1);
	return (1);
}