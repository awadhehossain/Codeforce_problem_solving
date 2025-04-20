#include<stdio.h>
int main()
{
    float n;
    scanf("%f",&n);
    int intigerpart=(int)n;
    float floatpart=n-intigerpart;
    if(floatpart==0)
    {
        printf("int %d",intigerpart);
    
    }
    else
    {
        printf("float %d %.3f",intigerpart,floatpart);
    }
    return 0;
    
}