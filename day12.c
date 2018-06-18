#include <stdio.h>

int main(void) 
{
char name[10];
int ind=0,count=0,i;
scanf("%s ",name);
while(name[ind]!='\0')
{
if(name[ind]>='a' && name[ind]<='z')
{
    count++;
    ind++;
}
}
for(i=count;i>=0;i--)
{
    printf("%c",name[i]);
}

	return 0;
}

