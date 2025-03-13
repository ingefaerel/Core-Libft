#include <assert.h>
#include <stdio.h>

void ft_strclr(char *s);

int ft_strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

int test_is_nul(char *s)
{
	int is_nul;
	int len;
	int i;

	is_nul = 1;
	i = 0;
	len = ft_strlen(s);
	ft_strclr(s);
	while(i <= len)
	{
		if (s[i] != '\0')
			is_nul = 0;
		i++;
	}
	return (is_nul);
}
int main(void)
{
	char s[] = "Hello";
	assert(test_is_nul(s) == 1);

	printf("succ\n");

	return (0);
}