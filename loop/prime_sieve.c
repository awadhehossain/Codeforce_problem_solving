#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    int primes[1000000] = {0};
    int count = 0;
    
    for (int i = 2; i <= n; i++) 
    {
        int isPrime = 1;
        
        for (int j = 2; j * j <= i; j++) 
        {
            if (i % j == 0) 
            {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime == 1) 
        {
            primes[count] = i;
            count++;
        }
    }
    
    printf("%d\n", count);
    for (int i = 0; i < count; i++) 
    {
        printf("%d ", primes[i]);
    }
    printf("\n");
    
    return 0;
}