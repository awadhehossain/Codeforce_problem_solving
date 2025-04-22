#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    char f=ch+1;
    if(ch=='z')
    {
        f='a';
    }
    printf("%c",f);
    return 0;

}