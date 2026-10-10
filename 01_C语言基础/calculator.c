#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(65001); // 设置控制台输出为 UTF-8 编码
    double a, b, res; // 定义两个操作数和一个结果变量
    char op;//op保存运算符 + - * /
    printf("请输入算式，例：3 + 5\n");
    scanf("%lf %c %lf", &a, &op, &b);// 输入两个操作数和一个运算符

    switch(op)// 根据运算符进行不同的计算
    {
        case '+': res = a + b; printf("结果=%.2lf\n", res); break;// 如果运算符是 +，则进行加法运算
        case '-': res = a - b; printf("结果=%.2lf\n", res); break;// 如果运算符是 -，则进行减法运算
        case '*': res = a * b; printf("结果=%.2lf\n", res); break;// 如果运算符是 *，则进行乘法运算
        case '/':// 如果运算符是 /，则进行除法运算
            if(b == 0)// 如果除数为 0，则输出错误信息
                printf("错误：除数不能为0！\n");
            else
            {
                res = a / b;// 如果除数不为 0，则进行除法运算
                printf("结果=%.2lf\n", res);
            }
            break;
        default: printf("不支持的运算符\n");// 如果运算符不是 + - * /，则输出错误信息
    }
    return 0;
}