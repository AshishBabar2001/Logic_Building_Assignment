#include<stdio.h>
main()
{
    char ch ='\0';
    printf("\n Enter Character to check it is Upppercase or lowercase : ");
    scanf("%c",&ch);

    if((ch>='A') && (ch<='Z'))
    {
        printf("\n It Is Uppercase !!!");
    }
    else if((ch>='a')&&(ch<='z'))
    {
        printf("\n It Is Lowercase");
    }
    else
    {
        printf("\n This is Neither An Lowercase Nor Uppercase");
    }
    getch();
}
