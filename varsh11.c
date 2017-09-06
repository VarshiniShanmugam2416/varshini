#include<stdio.h>
void main()
{
  int n,a,m=0,sum=0;
  if(n!=0)
 {
    a=n%10;
    sum=sum*10+a;
    m=n/10;
  }
 if(sum==n)
 {
 printf("Palindrome");
 }
 else
 {
 printf("Not Palindrome");
 }
 }
 
