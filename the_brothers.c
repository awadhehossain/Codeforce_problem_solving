#include<stdio.h>
#include<string.h>
int main()
{
    char f1[200],s1[200],f2[200],s2[200];
    scanf("%s %s",f1,s1);
    scanf("%s %s",f2,s2);
    if(strcmp(s1,s2)==0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }
    return 0;
}