#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void)
{
    SetConsoleOutputCP(65001); // 设置控制台输出为 UTF-8 编码
    int n;
    printf( "请输入你要算几个数字: ");
    scanf("%d",&n);
    int *arr = (int * )malloc(n * sizeof(int));// 动态申请内存空间，存储 n 个整数
    if(arr == NULL)// 判断内存申请是否成功
    {
        printf("内存申请失败！ \n");// 如果内存申请失败，输出错误信息并返回 1
        return 1;
    }
    int sum = 0;
    for(int i = 0; i < n; i++)// 循环 n 次，输入 n 个整数并计算它们的和
    {
        printf("请输入第%d个数字: ",i+1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];// 将输入的整数累加到 sum 中
    }
    double avg = (double)sum / n;
    printf("平均值 = %.2f\n", avg);
    free(arr);// 释放动态申请的内存空间
    arr = NULL;// 将指针置为 NULL，避免悬空指针
    return 0;
}