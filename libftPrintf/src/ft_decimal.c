#include "includes/libftprintf.h"

int	ft_decimal(int n)
{
	int	count;
	int	divisor;

	count = 0;
	divisor = 1;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
		count++;
	}
	while (n / divisor >= 10)
		divisor *= 10;
	while (divisor > 0)
	{
		ft_putchar((n / divisor ) + '0');
		n = n % divisor;
		divisor /= 10;
		count++;
	}
	return (count);
}