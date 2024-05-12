#include <stdio.h>

int sum_array_norm(int *array, int size)
{
    register int i;
    int sum = 0;
    int *ptr = array;

    for (i = 0; i < size; i++)
    {
        sum += *ptr;
        ptr++;

    }

    return sum;
}

int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};

    int size = sizeof(array) / sizeof(array[0]);
    int res  = sum_array_norm(array, size);

    printf("Soma dos elemento com ponterios: %d\n", res);

    return 0; 
}

