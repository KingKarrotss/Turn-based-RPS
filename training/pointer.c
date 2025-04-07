#include <stdio.h>
// int main()
// {
//     int a[] = {1, 2, 5, 4, 5};
//     int *p = a;
//     for(int i = 0; i < 5; i++)
//     {
//         printf("%d\n", *(p + i));
//     }
// }


void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    int a = 10;
    int b = 20;

    swap(&a, &b);
    printf("%d,%d\n", a, b);
}