
//写代码
//1. 写出主函数（main函数）
// 如何执行？C语言是从主函数的第一行开始执行的
//所以 C语言代码中需要有main函数作为入口

//现在我们写个代码，目的是输出fuck you
//用的就是printf - 库函数，用来在屏幕上打印信息
//printf 的使用，也是需要打招呼的（需要引用头文件stdio.h)


#include <stdio.h>
int main()
{
	printf("fuck you\n");

		return 0;

}

// 编译+链接+运行代码，快捷键是ctrl+f5
//有且仅有一个main函数
// 1.一个工程中可以有多个.c文件
// 2.但是多个.c文件种只能有一个main函数
// 