#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strnew(size_t size);

int test_strnew(size_t size)
{
    size_t i;
    char *str;
    int is_null;

    is_null = 1;

    str = ft_strnew(size);
    i = 0;
    while (i <= size)
    {
        if (str[i] != '\0')
            is_null = 0;
        // printf("%d\n", str[i]);
        i++;
    }
    if (!is_null)
        printf("error: some char is not 0");

    free(str); 
    return (i);
}
int main(void)
{
    assert(test_strnew(5) == 6);
    assert(test_strnew(200) == 201);
    assert(test_strnew(0) == 1);
    // test_strnew(5);
    printf("succ\n");

    return (0);
}