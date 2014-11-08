#include <stdio.h>

#define ARRAYSIZE 100

int main(int argc, char *argv[])
{
    int n, i, j;
    int temp;
    int array[ARRAYSIZE];

    n = 0;

    while(scanf("%d", &array[n]) != EOF)
    {
        n++;
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(array[j + 1] > array[j])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp; 
            }
        }
    }

    printf("The %dth number is %d\n", n/2, array[n/2 - 1]);

    return 0;
}
