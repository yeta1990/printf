
#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int result1;
	int	result2;
/*	result1 = ft_printf("hola %i ", 00000);
	ft_printf("\nResult: %i\n", result1);
*/	
//	ft_putnbr_base(1234315134, "0123456789abcdef");
	result1 = ft_printf("hola %x ", 123456);
	ft_printf("\nResult: %i\n", result1);
	result1 = ft_printf("hola %X", 123456);
	ft_printf("\nResult: %i\n", result1);
/*
	result1 = ft_printf("hola %c %i", 'd', 12);	
	ft_printf("\nResult: %i\n", result1);
	result1 = ft_printf(" %s %%%i", "pepe\n", 98765);
	ft_printf("\nResult: %i\n", result1);
	result1 = ft_printf("0012345");
	ft_printf("\nResult: %i\n", result1);
	ft_printf("\njuan");
	result1 = ft_printf("%%");
	ft_printf("\nResult: %i\n", result1);
	ft_printf("\n<---\n");
	
*/



/*	result2 = printf("hola %i ", 00000);
	printf("\nResult: %i\n", result2);*/
	result2 = printf("hola %x ", 123456);
	printf("\nResult: %i\n", result2);
	result2 = printf("hola %X", 123456);
	printf("\nResult: %i\n", result2);


	/*
	result2 = printf("hola %c %i", 'd', 12);	
	printf("\nResult: %i\n", result2);
	result2 = printf(" %s %%%i", "pepe\n", 98765);
	printf("\nResult: %i\n", result2);
	result2 = printf("0012345");
	printf("\nResult: %i\n", result2);
	printf("\njuan");
	result2 = printf("%%");
	printf("\nResult: %i\n", result2);
	printf("\n<---\n");*/
	
//	system("leaks a.out");

}
