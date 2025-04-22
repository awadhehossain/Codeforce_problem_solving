#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    double result=(double)a/b;
    printf("floor %d / %d = %d\n",a,b,(int)floor(result));
    printf("ceil %d / %d = %d\n",a,b,(int)ceil(result));
    printf("round %d / %d = %d\n",a,b,(int)round(result));
    return 0;
}