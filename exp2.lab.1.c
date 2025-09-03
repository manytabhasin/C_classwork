#include<stdio.h>
int main()
{
    int a,peri;
    int l,b;
    printf("Enter length and breadth of rectangle");
    scanf("%d %d",&l,&b);
    peri=2*(l+b);
    a=l*b;
    printf("The area is %d\n",a);
    printf("The perimeter is %d\n",peri);
    return 0;
}