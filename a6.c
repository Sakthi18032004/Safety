#include <stdio.h>

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

int main()
{
    int n = 0, m = 0, r = 0, c = 0;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &r);
    scanf("%d", &c);

    int class[n][m];
    int dist[n][m];

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            dist[i][j] = 0;
        }
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            scanf("%d", &class[i][j]);
        }
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            dist[i][j] = manhattan_dist(i + 1, r, j + 1, c);
        }
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            printf("%d ", &dist[i][j]);
        }
        printf("\n");
    }

    return 0;
}