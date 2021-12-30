#include<stdio.h>
typedef int Bool;
#define true 1
#define false 0
int Check(int ino)
{
    if(ino % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int value = 0;
    Bool bRet = false;

    printf("Enter Number : ");
    scanf("%d",&value);

    bRet = Check(value);

    if(bRet == true)
    {
        printf("Divisible By 5 ");
    }
    else
    {
        printf("Not Divisible By 5");
    }
    return 0;
}
