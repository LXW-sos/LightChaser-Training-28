#include<stdio.h>

void swap(int *a, int *b)
{
    int t;// 定义一个临时变量
    t = *a;// 将 a 的值赋给临时变量 t
    *a = *b;// 将 b 的值赋给 a
    *b = t;// 将临时变量 t 的值赋给 b
}
int main()
{
    int x, y;

    while(1)// 无限循环，直到用户输入 0 0 才退出
    {
        printf("Enter two numbers(0 0 to exit): ");// 提示用户输入两个整数
        scanf("%d %d", &x, &y);// 输入两个整数，分别赋值给 x 和 y

        if(x == 0 && y == 0)// 如果用户输入 0 0，则退出循环
        {
            break;
        }
        swap(&x, &y);// 调用 swap 函数，传入 x 和 y 的地址，实现交换
        printf("After swap : x = %d, y = %d\n\n", x, y);// 输出交换后的结果
    }
    return 0;
}
   