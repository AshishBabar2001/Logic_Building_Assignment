#include<stdio.h>
void Accept(int iNo)
{
int iCnt = 0;
for(; iNo > 0; iNo--)
 {
 printf("*");
}
}
int main()
{
 int iValue = 0;
    printf("Enter a Number : ");
    scanf("%d",&iValue);

    Accept(iValue);
 return 0;
}
