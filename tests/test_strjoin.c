#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	main(void)
{
	assert(strcmp(ft_strjoin("Hi", " you"), "Hi you") == 0);
	assert(strcmp(ft_strjoin("", " you"), " you") == 0);
	assert(strcmp(ft_strjoin("6876", "89"), "687689") == 0);
	assert(strcmp(ft_strjoin("", ""), "") == 0);

	char *str = ft_strjoin("Test", " Memory");
	assert(str != NULL);
	free(str);

	printf("Passed\n");
	return (0);
}