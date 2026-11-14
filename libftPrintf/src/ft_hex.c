#include "includes/libftprintf.h"

int	print_hex(unsigned long n, char format)
{
	if (n < 10)
		return (ft_putchar(n + '0'), 1);
	if (format == 'X')
		return (ft_putchar('A' + (n - 10)), 1);
	return (ft_putchar('a' + (n - 10)), 1);
}
//Divisor Method
int	ft_hex(unsigned  long n, char format)
{
	unsigned long divisor;
	int count;

	divisor = 1;
	count = 0;
	while (n / divisor >= 16)
		divisor *= 16;
	while (divisor > 0)
	{
		print_hex(n / divisor, format);
		n = n % divisor; 
		count++;
		divisor /= 16;
	}
	return (count);
}