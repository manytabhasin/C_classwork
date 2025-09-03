#include<stdio.h>
int main()
{
    int n1,n2;
    float sum=0;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1,&n2);
    sum=n1+n2;
    printf("The sum is %f\n",sum);
    return 0;
}
