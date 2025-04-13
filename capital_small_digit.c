#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    {
        printf("IS DIGIT");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("ALPHA\nIS SMALL");
    }
    else if (ch>='A' && ch<='Z')
    {
        printf("ALPHA\nIS CAPITAL");
    }
    
}