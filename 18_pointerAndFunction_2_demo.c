#include <stdio.h>
void get_max_num(int arr[], int len,int*max,int*min);

int main()
{
  
    int arr[] = {1, 11, 23, 4, 45, 6, 7, 42, 75, -21};
    int len = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    
    //指针作用2：通过指针调用函数，返回多个值
    get_max_num(arr, len,&max,&min);
    printf("最大值是：%d\n",max);
    printf("最小值是：%d\n",min);


    return 0;
}
void get_max_num(int arr[], int len,int*max,int*min)
{
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }

   for (int i = 1; i < len ; i++)
   {
    if (arr[i] < *min)
    {
        *min = arr[i];
    }
    
   }
   
};