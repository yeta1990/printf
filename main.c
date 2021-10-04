
#include "libftprintf.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	ft_printf("hola %c %i", 'd', 123);	
	ft_printf(" pepe");
	ft_printf("\njuan");
	ft_printf("%%");
	ft_printf("\n<---\n");
	
	printf("hola %c %i", 'd', 123);	
	printf(" pepe");
	printf("\njuan");
	printf("%%");
	printf("\n<---\n");
	
	system("leaks a.out");

}
