#include<stdio.h>
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    for(int i=num1; i<=num2; i++)
        {
            if(i%2==0)
            {
                printf("%d ", i);
                printf("even\n");
            }
        }
    }