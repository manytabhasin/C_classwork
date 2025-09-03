#include<stdio.h>
int main()
{
    int sum=0,c;
    float avg=0;
    for(int i=1;i<=30;i++)
    {
        if(i%2!=0)
        {
            c++;
            if(c<=15)
            {
            sum=sum+i;
            avg=sum/c;
            }
        }
    }
    printf("The sum is %d\n",sum);
    printf("The average is %f\n",avg);
}