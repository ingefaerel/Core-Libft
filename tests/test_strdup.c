#include <stdio.h>
#include <assert.h>
#include <string.h>

char *strdup(const char *s);

int main()
{
	assert(strcmp(strdup("Hello"), "Hello") == 0);
	assert(strcmp(strdup(""), "") == 0);
	assert(strcmp(strdup("I am a God of fuck"), "I am a God of fuck") == 0);
	assert(strcmp(strdup("Surely sometimes i wish i was someone else. Nevermind being impossible, it is pointless. I am who I am and i accept that."), "Surely sometimes i wish i was someone else. Nevermind being impossible, it is pointless. I am who I am and i accept that.") == 0);
    printf("succ\n");
    return 0;
}