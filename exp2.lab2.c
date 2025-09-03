#include<stdio.h>
int main()
{
    float temp;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);
    temp=(temp*9/5)+32;
    printf("Temperature in Fahrenheit is %f\n",temp);
}