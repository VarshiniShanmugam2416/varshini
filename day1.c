#include <stdio.h>

int main(void) 
{
int a,ans=0,j=1,i;
printf("Enter the number: ");
scanf("%d",&a);
for(i=0;i<5;i++)
{
ans=a*j;
j++;
printf("%d ",ans);
}

	return 0;
}
