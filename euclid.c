#include<stdio.h>
int euclid(int a,int b)
{ if(b==0)
{return a;}
 else
 {return euclid(b,a%b);}
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
