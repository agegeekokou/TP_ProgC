#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 1;
    int Un = 0;
    int i = 0;
    int n = 10;

    for (i = 0; i <= n; i++) {
        Un = a + b; 
        printf("%d, ", a);

        a = b;
        b = Un;
    }

    return 0;
}
