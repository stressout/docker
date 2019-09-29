#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char *s;
	if (!(s = (char*)malloc(sizeof(char) * 1000)))
		return (printf("leak found"));
	return (0);
}
