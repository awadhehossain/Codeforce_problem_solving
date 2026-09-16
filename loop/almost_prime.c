#include<stdio.h>
int main()
{
    int n;
    int ans =0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int count=0;
        int k=i;
        for(int j=2;j<=k;j++)
        {
            if(k%j==0)
            {
                count++;
            
                while(k%j==0)
                {
                    k=k/j;
                }
            }
       }
       if(count==2)
       {
        ans++;
       }
    }
printf("%d\n",ans);
return 0;
}