#include<stdio.h>
main()
{
    int No=0;

    printf("ASCII Number : ");

    while(No<128)
    {
        printf("\n \t \t %3d = %c",No,No);
        No++;
    }
    getch();
}
