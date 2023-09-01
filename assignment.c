#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int l = 0; l<t; l++)
    {
        int a = 0;
        int n = 0;
        int c = 0;

        scanf("%d", &a);
        scanf("%d", &n);
        scanf("%d", &c);

        double dec = 0;
        int rem = 0;

        rem = a%n;
        dec = (float) rem / n;
        double num = 0;
        int digit = 0;
        int ans = 0.;

        int count = 0;

        for(int i = 0; i<n; i++)
        {
            num = dec*10;
            digit = (int) num / 1;

            dec = (float) num - digit;

            if(digit == c)
            {
                ans = i+1;
                count = count+1;
                break;
            }
            /*else if(digit != c)
            {
                count = count + 1;
            }*/
        }

        if(count == 0)
        {
            printf("-1");
        }
        else
        {
            printf("%d", ans);
        }
        printf("\n");
    }

    return 0;
}