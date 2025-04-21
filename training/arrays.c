#include <stdio.h>
#include <stdlib.h>
int (*plusone(int (*p)[4]))[4]
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            *(*(p + i) + j) += 1;
        }
    }
    return p;
}

int main()
{
    int b[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int (*p)[4] = b;
    int (*p1)[4] = plusone(p);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\n", *(*(p1 + i) + j));
        }
    }
}
