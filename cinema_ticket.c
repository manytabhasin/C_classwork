#include<stdio.h>
int main()
{
    int premium_t=200,standard_t=150,eco_t=100;
    int premium_s,standard_s,eco_s,dis,v1,v2,v3,v;
    printf("do you want to book a ticket? if yes then proceed\n");
    if("yes")
    {
        printf("welcome to the cinema\n");
    }
    else
    {
        return 0;
    }
    printf("enter 1 for premium ticket\n");
    printf("enter 2 for standard ticket\n");
    printf("enter 3 for economy ticket\n");
    int choice,c=0;
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("enter the number of premium tickets\n");
            scanf("%d",&premium_s);
            v1=premium_t*premium_s;
            printf("the total cost is %d\n",v1);
            c++;
            break;
        case 2:
            printf("enter the number of standard tickets\n");
            scanf("%d",&standard_s);
            v2=standard_t*standard_s;
            printf("the total cost is %d\n",v2);
            c++;
            break;
            
        case 3:
            printf("enter the number of economy tickets\n");
            scanf("%d",&eco_s);
            v3=eco_t*eco_s;
            printf("the total cost is %d\n",v3);
            c++;
            break;
        default:
        printf("enter a valid choice\n");
        break;
    }
    
        if(c>=5)
       {
        dis=0.1;
        
        }

    }


