#include <stdio.h>
 
int main()
{
    int n = 3;
    int c = 0;
 
    while (n != 0)
    {
        if ((n & 1) == 1)
            c++;
        n = n >> 1;
    }
    printf("O/P :%d",c);
    return 0;
}
