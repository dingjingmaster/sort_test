#include "SelectionSort.h"
#include <stdlib.h>

int Selection_Sort(int list[], int num)
{
    //检查传入参数
    if(list == NULL || num <= 0)
    {
        return ERROR;
    }

    int     min = 0;
    int     temp = 0;
    //排序  从小到大
    for(int i = 0; i < num; ++i)
    {
        min = i;
        for(int j = i; j < num; ++j)
        {
            if(list[min] > list[j])
            {
                min = j;          //找到最小值
            }
        }

        temp = list[i];
        list[i] = list[min];
        list[min] = temp;
    }

    return OK;
}
