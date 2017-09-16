#include<stdio.h>
void main()
{
int a,b;
scanf("%d %d",&a,&b);
if(a<b)
{
for(i=a;i<=b;i++)
{
if(i%2==1)
printf("%d is evn ",i);
}
}
if(b<a)
{
for(i=;i<=a;i++)
{
if(i%2==0)
printf("%d is odd",i);
}
}
}
