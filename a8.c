#include <stdio.h>

int main()
{
    int t = 0;
    scanf("%d", &t);

    for (int l = 0; l<t; l++)
    {
        int a = 0;
        int n = 0;
        int c = 0;

        scanf("%d", &a);
        scanf("%d", &n);
        scanf("%d", &c);

        int rem = 0; 
        int digit = -1;
        int store = 0;
        int count = 0;
        rem = a%n;
        
        for(int i = 0; i<n; i++)
        {
            digit = rem*10/n;
            rem = (rem*10) % n;
            
            if(digit == c)
            {
                printf("%d\n",i+1);
                break;
            }
            else
            {
                count += 1;
            }

        }

        if(count == n)
        {
            printf("-1\n");
        }
    }

    return 0;
}