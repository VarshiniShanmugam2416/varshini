#include<stdio.h>
int main()
{
  int a,b,sum,rem;
  scanf("%d",&a);
  if(a!=0)
  {
     sum=a%10;
     rem=sum*sum*sum;
     b=a/10;
   }
if(a==b)
   {
    printf("armstrong");
   }
else
   {
    printf("not an armstrong num");
    }
}
