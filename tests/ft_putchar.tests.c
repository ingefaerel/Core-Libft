#include <assert.h>
#include <stdio.h>


void ft_putchar(char c);

char ft_putchar_test(char c)
{
    FILE *fptr;
    char buffer[2] = {0};

    fptr = freopen("output.txt", "w", stdout);

    if (!fptr)
    {
        perror("freopen");
        return '\0';
    }

    ft_putchar(c);

    fclose(fptr);

    freopen("/dev/tty", "w", stdout);

    fptr = fopen("output.txt", "r");
    
    if (!fptr)
    {
        perror("fopen");
        return '\0';
    }

    fgets(buffer, 2, fptr);
    fclose(fptr);

    return (buffer[0]);
}
int main() {
  
    assert(ft_putchar_test('c') == 'c');

    printf("passed\n");

    return 0;
}
