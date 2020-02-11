#include<stdio.h>
int gcd(int a,int b)
{ if(b==0)
{return a;}
 else
 {return gcd(b,a%b);}
}


int main()
{
 int a,b;
 printf("Enter a,b \b");
 scanf("%d%d",&a,&b);
 a=gcd(a,b);
 printf("Gcd is %d",a);
 return 0;
}
