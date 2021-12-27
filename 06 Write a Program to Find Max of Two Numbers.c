#include<stdio.h>
main()
{
    int n1,n2;

    printf("Enter a Two Numbers : ");
    scanf("%d %d",&n1,&n2);

    if(n1>n2)
    {
        printf("\n Max Is N1 : %d",n1);
    }
    else
    {
        printf("\n Max Is N2 : %d",n2);
    }
}
