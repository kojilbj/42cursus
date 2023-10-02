#include "ft_printf.h"
#include <stdio.h>

int     main(void)
{
	char *c;

	c = NULL;
	int i = ft_printf("%pHello, world!\n", c);
	int k = printf("%pHello, world!\n", c);
	printf("%d\n", i - k);
}

