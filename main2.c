#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int c = 42;
	int d = 21;
	int a =  ft_printf("%s %s %s %s %s %s %s %s %s %s %d %d %d %d %d %d %d %d %d %d %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %x %x %x %x %x %x %x %x %x %x %c %c %c %c %c %c %c %c %c %c %% %% %% %% %% %% %% %% %% ", "" , "hola mundo", "khkgjadhs gdh", NULL ," LKDSGHKSHGKJHSFGKLJHAFKJGHHJG KSJDHGLKHGKKG ", "" , "hola mundo", "khkgjadhs gdh", NULL ," LKDSGHKSHGKJHSFGKLJHAFKJGHHJG KSJDHGLKHGKKG ", 12, 12345, 234567, 0, 7852, -1, 1234567, 9809799, -214748364, 2147483647, &c, &c, &c, &c, &c, &c, &c, &c, &c, NULL, &d, &d, &d, &d, &d, &d, &d, &d, &d, &d, d, d, d, d, d, d, d, d, d, d, c, c, c, c, c, c, c, c, c, c );
	printf("\n-----------------------------------------------------------------------------------\n");
	int b =   printf("\n%s %s %s %s %s %s %s %s %s %s %d %d %d %d %d %d %d %d %d %d %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %p %x %x %x %x %x %x %x %x %x %x %c %c %c %c %c %c %c %c %c %c %% %% %% %% %% %% %% %% %% ", "" , "hola mundo", "khkgjadhs gdh", NULL ," LKDSGHKSHGKJHSFGKLJHAFKJGHHJG KSJDHGLKHGKKG ", "" , "hola mundo", "khkgjadhs gdh", NULL ," LKDSGHKSHGKJHSFGKLJHAFKJGHHJG KSJDHGLKHGKKG ", 12, 12345, 234567, 0, 7852, -1, 1234567, 9809799, -214748364, 2147483647, &c, &c, &c, &c, &c, &c, &c, &c, &c, NULL, &d, &d, &d, &d, &d, &d, &d, &d, &d, &d, d, d, d, d, d, d, d, d, d, d, c, c, c, c, c, c, c, c, c, c );
	if (a !=  b -1)
		printf ("Error\n");
//	while(1);
	return 0;
}
