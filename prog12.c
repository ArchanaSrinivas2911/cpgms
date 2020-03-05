#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,p,area;
printf("enter three sides\n");
scanf("%d %d %d",&a,&b,&c);
p=(a+b+c)/2;
area=sqrt(p*(p-a)*(p-b)*(p-c));
printf("area of triangle with three sides is %d\n sq.units",area);
}




