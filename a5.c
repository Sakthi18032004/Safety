#include <stdio.h>

int manhattan_dist(int a, int b, int c, int d);

int main()
{
    int t = 0;
    scanf("%d", &t);

    for(int i = 0; i<t; i++)
    {
        int n = 0;
        scanf("%d", &n);

        int m = 0;
        scanf("%d", &m);

        int r = 0;
        int c = 0;
        scanf("%d", &r);
        scanf("%d", &c);

        int class[n][m];

    

        for(int i = 0; i<n; i++)
        {
            for (int j = 0; j<m; j++)
            {
                scanf("%d", &class[i][j]);
            }
                
        }

        class[r-1][c-1] = 0;   

        int dist[n][m];

        for(int i = 0; i<n; i++)
        {
            for (int j = 0; j<m; j++)
            {               
                dist[i][j] = manhattan_dist(i+1,r,j+1,c);        
            }
        }

        int num1 = n+m;
        int num2 = n+m;
        int storei1 = 0;
        int storej1 = 0;
        int storei2 = 0;
        int storej2 = 0;

        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(num1 <= dist[i][j] || class[i][j] == 0)
                {
                    num1 = num1;
                    
                }
                else if(num1 > dist[i][j] && class[i][j] != 0)
                {
                    num1 = dist[i][j];
                    storei1 = i;
                    storej1 = j;
                }
            }
        }

        class[storei1][storej1] = 0;
        

        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(num2 <= dist[i][j] || class[i][j] == 0)
                {
                    num2 = num2;
                    
                }
                else if(num2 > dist[i][j] && class[i][j] != 0)
                {
                    num2 = dist[i][j];
                    storei2 = i;
                    storej2 = j;
                }
            }
        }

        if (num1 == n+m)
        {
            printf("-1");
        }

        else if(num1 < num2)
        {
            printf("%d %d", storei1 +1, storej1 +1);
        }

        else
        {
            if(storei1 < storei2)
            {
                printf("%d %d", storei1 +1, storej1 +1);
            }
            else if(storei1 == storei2 && storej1<storej2)
            {
                printf("%d %d", storei1 +1, storej1 +1);
            }
            else
            {
                printf("%d %d", storei2 +1, storej2 +1);
            }
        }
         printf("\n");
    }

   

    return 0;
}


int manhattan_dist(int a, int b, int c, int d)
{
    int length1;
    int length2;
    int length;

    if(c>d)
    {
        length2 = c-d;
    }
    else
    {
        length2 = d-c;
    }
    
    if(a>b)
    {
        length1 = a-b;
    }
    else
    {
        length1 = b-a;
    }
    
    length = length1 + length2;
    
    return length;
}