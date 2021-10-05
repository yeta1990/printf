
#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int result1;
	int	result2;

	
//	ft_putnbr_base(1234315134, "0123456789abcdef");
//	result1 = ft_printf("hola %x ", 6);
//	ft_printf("\nResult: %i\n", result1);
//	result1 = ft_printf("hola %X", 123456);
//	ft_printf("\nResult: %i\n", result1);
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
/*	ft_printf("\n");
	result1 = ft_printf("");
	ft_printf("\nResult: %i\n", result1);
	result2 = printf("");
	printf("\nResult: %i\n", result2);
	
	result1 = ft_printf("%c", 0);
	ft_printf("\nResult: %i\n", result1);
	result2 = printf("%c", 0);
	printf("\nResult: %i\n", result2);
	
	result1 = ft_printf("%x ", -2);
	ft_printf("\nResult: %i\n", result1);
	result2 = printf("%x ", -2);
	printf("\nResult: %i\n", result2);

	result1 = ft_printf(" \" \" %s 1", NULL);
	ft_printf("\nResult: %i\n", result1);
	result2 = printf(" \" \" %s 1", NULL);
	printf("\nResult: %i\n", result2);

	result1 = ft_printf(" empty:%s ", "");
	ft_printf("\nResult: %i\n", result1);
	result2 = printf(" empty:%s ", "");
	printf("\nResult: %i\n", result2);
	
	result1 = ft_printf(" empty:%s ", "");
	ft_printf("\nResult: %i\n", result1);
	result2 = printf(" empty:%s ", "");
	printf("\nResult: %i\n", result2);
	
	result1 = ft_printf("%x %x", -2, 1);
	ft_printf("\nResult: %i\n", result1);
	result2 = printf("%x %x", -2, 1);
	printf("\nResult: %i\n", result2);


	result1 = ft_printf("%x %x%x", -2, 1, 256);
	ft_printf("\nResult: %i\n", result1);
	result2 = printf("%x %x%x", -2, 1, 256);
	printf("\nResult: %i\n", result2);
*/
//	result2 = printf("hola %X", 123456);
//	printf("\nResult: %i\n", result2);


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

//	result1 = ft_printf("%u", 4294967291);
//	ft_printf("\nResult1: %i\n", result1);
//	result2 = printf("%u", 4294967291);
//	printf("\nResult2: %i\n", result2);

result1 = 0;
result2 = 0;

//pointer testers
	void *s = malloc(1);
	size_t int_value = (size_t) s;

	printf("s: %zx", int_value);
	printf("\np: %p", s);
	
	ft_printf("eo: %x\n", int_value);
	

//result1 = 0;
//	result3 = ft_printf("%x", ft_printf("%i", (void *)&result1));
//	ft_printf("\nResult: %i", result1);
//	result2 = printf("%p", &result1);
//	ft_printf("\nResult: %i", result2);

//	system("leaks a.out");


}
