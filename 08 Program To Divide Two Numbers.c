#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
int iAns = 0;
if(iNo2 == 0)
 {
 return -1;
 }
 iAns = iNo1 / iNo2;
return iAns;
}
int main()`
{
 int iValue1, iValue2;
 printf("Enter 2 Values : ");
 scanf("%d %d",&iValue1,&iValue2);
 printf("Division is %d",Divide(iValue1,iValue2));
 return 0;
}
