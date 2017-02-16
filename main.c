#include <stdio.h>
#include "SelectionSort.h"

int main(int argc, char *argv[])
{
    int array[10] = {6,5,4,3,2,1,8,9,7,6};

    Selection_Sort(array, 10);

    for(int i = 0; i < 10; ++i)
    {
        printf("%d\n",array[i]);
    }

    return 0;
}
