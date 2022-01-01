#include<stdio.h>
main()
{
    int no,flag,i;
    flag = 0;

    printf("\n Enter Number : ");
    scanf("%d",&no);

    for(i = 2 ; i <= no/2 ; i++)
    {
        if(no % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("\n Enter Number Is Prime");
    }
    else
    {
        printf("\n Enter Number Is Not Prime");
    }



}
