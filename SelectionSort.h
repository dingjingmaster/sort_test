#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#define OK      0
#define ERROR   -1

/**
 *选择排序
 *  优点：
 *      ①与数据移动有关，若某个数据位于最正确的位置上，则不用被移动
 *  选择排序每次交换一对元素，每次都至少一个被移动到其最终位置上。N个
 *  元素排序共进行 N-1 次交换。
 *      ②所有靠交换去移动元素的排序算法中，非常好的一种。
 */

//将要排序的 序列 和 序列长度 传入，完成排序。
int Selection_Sort(int list[], int num);







#endif // SELECTIONSORT_H
