#include <stdio.h>

int main()
{
    int a, b;
    char r;
    int result = 1;

    scanf("%d %c %d", &a, &r, &b);

    if (r == '<')
    {
        if (a < b)
        {
            result = 0;
        }
    }
    else if (r == '>')
    {
        if (a > b)
        {
            result = 0;
        }
    }
    else if (r == '=')
    {
        if (a == b)
        {
            result = 0;
        }
    }

    if (result == 0)
    {
        printf("Right");
    }
    else
    {
        printf("Wrong");
    }

    return 0;
}
