#include <stdio.h>
#include <assert.h>
#include <string.h>

int	ft_strlen(char *str);

int main()
{
	assert(ft_strlen("Hello") == strlen("Hello"));

	printf("succ\n");

	return (0);
}