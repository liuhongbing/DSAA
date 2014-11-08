#include <stdio.h>

#define ARRAYSIZE 100

void bublesort(int *parray, int arraysize)
{
    int i, j;
    int temp;
    
    if(parray == NULL)
        return;

    for(i = 0; i < arraysize; i++)
    {
        for(j = 0; j < arraysize - i - 1; j++)
        {
            if(parray[j + 1] > parray[j])
            {
                temp = parray[j + 1];
                parray[j + 1] = parray[j];
                parray[j] = temp; 
            }
        }
    }
    
    return;
}

int findkthnum(int *parray, int arraysize, int k)
{
    if(parray == NULL)
        return -1;

    bublesort(parray, arraysize);

    return parray[k - 1];
} 

int main(int argc, char *argv[])
{
    int n;
    int array[ARRAYSIZE];

    n = 0;

    while(scanf("%d", &array[n]) != EOF)
        n++;

    printf("The %dth number is %d\n", n/2, findkthnum(array, n, n/2));

    return 0;
}
