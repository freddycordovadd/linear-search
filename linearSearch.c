#include <stdio.h>

int search(int vector[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (vector[i] == x)
            return i;

    return -1;
}

int main()
{
    int pos;
    int n = 10;
    int vector_entrada[] = {1,3,5,6,8,9,10,20,50,100};
    pos = search(vector_entrada, n, 50);

    printf("%d", pos);
}