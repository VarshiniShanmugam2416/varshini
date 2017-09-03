#include <stdio.h>
int main()
{
    int n, count=0;
    scanf("%d", &n);
    if(n>0)
    {
        n /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
