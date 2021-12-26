#include<stdio.h>
main()
{
    int Num1,Num2,Sum,Sub,Mul,Div,Mod;

    printf("\n Enter Two Numbers : ");
    scanf("%d %d",&Num1,&Num2);

    Sum = Num1 + Num2;
    printf("\n Summation Is : %d",Sum);
    Sub = Num1 - Num2;
    printf("\n Substraction Is : %d",Sub);
    Mul = Num1 * Num2;
    printf("\n Multiplication Is : %d",Mul);
    Div = Num1 / Num2;
    printf("\n Division Is : %d",Div);
    Mod = Num1 % Num2;
    printf("\n Module Division Is : %d",Mod);
    getch();
}
