#include<stdio.h>
void even_indices(int A[],int N,int i)
{
    if(i==-1)
    {
        return;
    }
    if(i%2==0)
    {
        printf("%d",A[i]);
        if(i>1)
        {
            printf(" ");
        }
    }
    even_indices(A,N,i-1);


}

int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    even_indices(A,N,N-1);
    return 0;
}