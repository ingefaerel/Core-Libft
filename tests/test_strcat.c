#include <stdio.h>
#include <string.h>
#include <assert.h>

char *ft_strcat(char *dst, const char *src);

void test_strcat()
{
    char buffer[50];
    
    strcpy(buffer, "Hello");
    ft_strcat(buffer, " World");
    assert(strcmp(buffer, "Hello World") == 0);
    
    strcpy(buffer, "Hello");
    ft_strcat(buffer, "");
    assert(strcmp(buffer, "Hello") == 0);
    
    strcpy(buffer, "");
    ft_strcat(buffer, "Test");
    assert(strcmp(buffer, "Test") == 0);
    
    strcpy(buffer, "A");
    ft_strcat(buffer, "B");
    ft_strcat(buffer, "C");
    assert(strcmp(buffer, "ABC") == 0);
    
    strcpy(buffer, "Hello");
    ft_strcat(buffer, "!@#");
    assert(strcmp(buffer, "Hello!@#") == 0);
    
    printf("All tests passed.\n");
}

int main()
{
    test_strcat();
    return 0;
}
