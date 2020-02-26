#include<stdio.h>
void main()
{
int a,b,add,s,m,d,r;
printf("enter two numbers a and b:\n");
scanf("%d %d",&a,&b);
add=a+b;
s=a-b;
m=a*b;
d=a/b;
r=a%b;
printf("the addition is : %d\n",add);
printf("the substraction is : %d\n",s);
printf("the multiplication is : %d\n",m);
printf("the division is : %d\n",d);
printf("the remainder is : %d\n",r);
}
