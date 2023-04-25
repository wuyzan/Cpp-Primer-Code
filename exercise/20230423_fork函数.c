#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    fork() || fork(); //最终的结果创建三个进程
    //fork()函数的执行结果是：父进程返回子进程的id号，子进程返回0
    //C++中对于逻辑运算符的求解策略为短路求值，即只有当左侧表达式的值无法确定整个表达式的值时才执行右侧表达式
    //本条语句中左侧的fork函数在父进程的返回值非零，可以确定整个表达式的值，因此不会再执行右侧fork函数
    //子进程的返回值为0，因此会执行右侧fork函数，执行的结果是再创建一个孙子进程，因此总共创建三个进程

    printf("Hello World!\n"); //输出几次就说明创建了几个进程

    return 0;
}