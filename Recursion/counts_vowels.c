#include<stdio.h>
#include <ctype.h>

int count_vowels(char *a,int i)
{
    if(a[i]=='\0')
    {
        return 0;
    }

    char c=tolower(a[i]);
    if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u')
    {
        return 1 + count_vowels(a,i+1);
    }
    else
    {
        return 0 + count_vowels(a,i+1);
    }
    

}

int main()
{
    char S[201];
    scanf("%[^\n]",S);
    printf("%d",count_vowels(S,0));

    return 0;

}

