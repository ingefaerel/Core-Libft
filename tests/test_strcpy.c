#include <stdio.h>
#include <assert.h>
#include <string.h> 


char *ft_strcpy(char *dst, const char *src);

int main()
{
    char dst[200];

    ft_strcpy(dst, "Hello, world!");
    assert(strcmp(dst, "Hello, world!") == 0);

    ft_strcpy(dst, "");
    assert(strcmp(dst, "") == 0);

    ft_strcpy(dst, "A");
    assert(strcmp(dst, "A") == 0);

    char small_dst[2];
    ft_strcpy(small_dst, "A");
    assert(strcmp(small_dst, "A") == 0);

    char standard_dst[100];
    ft_strcpy(standard_dst, "I am a God of fuck");
    assert(strcmp(ft_strcpy(dst, "I am a God of fuck"), standard_dst) == 0); 

    ft_strcpy(dst, "Surely sometimes i wish i was someone else. Nevermind being impossible, it is pointless. I am who I am and i accept that.");
    assert(strcmp(dst, "Surely sometimes i wish i was someone else. Nevermind being impossible, it is pointless. I am who I am and i accept that.") == 0);

    printf("succ\n");
    return 0;
}
