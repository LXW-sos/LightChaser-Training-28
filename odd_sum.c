#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); // 设置控制台输出为 UTF-8 编码
    int sum = 0;
    for (int i = 1; i <= 100; i++) {      // 循环 100 次，i 从 1 到 100
        if (i % 2 != 0)                 // 判断：i 是否能被 2 整除
         {
            
             sum = sum + i;
         }
    }
    printf("1 到 100 之间所有奇数的和为: %d\n", sum);
    return 0;
}