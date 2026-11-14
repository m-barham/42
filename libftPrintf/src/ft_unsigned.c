
#include "includes/libftprintf.h"

int ft_unsigned(unsigned int n)  // do unsigned method instead of just using decimal because the unsigned took from (0 to 4294967295) an like int 
{
	unsigned int	count;
	unsigned int	divisor;

	count = 0;
	divisor = 1;
	while ((n / divisor) >= 10)
		divisor *= 10;
	while (divisor > 0)
	{
		ft_putchar((n / divisor) + '0');
		n = n % divisor;
		divisor /= 10;
		count++;
	}
	return (count);
}