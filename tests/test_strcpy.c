#include <stdio.h>
#include <assert.h>
#include <string.h> 


char *strcpy(char *dst, const char *src);

int main()
{
    char dst[200];

    strcpy(dst, "Hello, world!");
    assert(strcmp(dst, "Hello, world!") == 0);

    strcpy(dst, "");
    assert(strcmp(dst, "") == 0);

    strcpy(dst, "A");
    assert(strcmp(dst, "A") == 0);

    char small_dst[2];
    strcpy(small_dst, "A");
    assert(strcmp(small_dst, "A") == 0);

    char standard_dst[100];
    strcpy(standard_dst, "I am a God of fuck");
    assert(strcmp(strcpy(dst, "I am a God of fuck"), standard_dst) == 0); 

    strcpy(dst, "Surely sometimes i wish i was someone else. Nevermind being impossible, it is pointless. I am who I am and i accept that.");
    assert(strcmp(dst, "Surely sometimes i wish i was someone else. Nevermind being impossible, it is pointless. I am who I am and i accept that.") == 0);

    printf("succ\n");
    return 0;
}
