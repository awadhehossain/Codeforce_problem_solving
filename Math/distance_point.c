#include<stdio.h>
#include<math.h>
int main()
{
   double a,b,c,d;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    double dis=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
    printf("%lf",dis);
    return 0;
    
}