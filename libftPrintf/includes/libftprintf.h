#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <unistd.h>
#include <stdarg.h>

int 	ft_printf(const char *format, ...);
size_t	ft_putchar(const char c);
int		ft_decimal(int n);
int		ft_hex(unsigned  long n, char format);
int		ft_string(char *p);
int 	ft_unsigned(unsigned int n);


#endif