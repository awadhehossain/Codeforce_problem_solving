#include<stdio.h>
#include<math.h>
int main()
{
  double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        printf("Valid\n");
       double s= (a+b+c)/2;
       double area= sqrt (s*(s-a)*(s-b)*(s-c));
        printf("%lf",area);

    }
    else
    {
        printf("Invalid");
    }

    return 0;
}