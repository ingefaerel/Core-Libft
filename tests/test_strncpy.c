
#include <stdio.h>

char *ft_strncpy(char *dst, const char *src, size_t sz);

int main(void)
{
	char *src;
	char dst[50];

	src = "Hello";

	char *res = ft_strncpy(dst, src, 3);

	printf("%s\n", res);

	return 0;
}