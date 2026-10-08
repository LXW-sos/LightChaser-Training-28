#include <stdio.h>
#include <stdlib.h>
#include <windows.h>   //新增：windows控制台接口

struct Student {
    char name[20];
    int score;
};

int main()
{
    // 程序一上来自动设置控制台输入输出为UTF‑8，解决中文乱码
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    printf("请输入一共有多少位学生：");
    scanf("%d", &n);// 输入学生人数

    struct Student *stu = (struct Student *)malloc(n * sizeof(struct Student));// 动态申请内存空间，存储 n 个学生信息
    if(stu == NULL)// 判断内存申请是否成功
    {
        printf("内存申请失败！\n");// 如果内存申请失败，输出错误信息并返回 1
        return 1;
    }

    for(int i = 0; i < n; i++)
    {
        printf("\n第%d个学生姓名：", i+1);// 提示用户输入第 i+1 个学生的姓名
        scanf("%s", stu[i].name);// 输入第 i+1 个学生的姓名，存储在结构体数组中
        printf("第%d个学生分数：", i+1);// 提示用户输入第 i+1 个学生的分数
        scanf("%d", &stu[i].score);// 输入第 i+1 个学生的分数，存储在结构体数组中
    }

    printf("\n===========全班成绩单===========\n");
    for(int i = 0; i < n; i++)
    {
        printf("姓名：%s\t分数：%d\n", stu[i].name, stu[i].score);
    }

    free(stu);// 释放动态申请的内存空间
    stu = NULL;
    return 0;
}