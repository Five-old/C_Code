#include <stdio.h>

int main()
{
    int arr[10] = {14, 567, 22, 67, 2123, 657, 4, 76, 9, 34};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("len = %d\n", len);

    for (int j = 0; j < len - 1; j++)
    {
        //将小的数据依次排到左边
        for (int i = j+1; i < len - 1; i++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}
