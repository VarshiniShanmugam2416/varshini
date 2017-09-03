#include<stdio.h>
void main()
{
int a,b,i,sum=1;
scanf("%d %d",&a,&b);
 
    while (b != 0)
    {
        sum *= a;
        --b;
    }
printf("%d",sum);
}
