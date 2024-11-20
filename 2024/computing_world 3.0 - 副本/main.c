/****************************************************************************
* 2024-10~11，南京农业大学信息管理学院，IT项目创业实践C语言程序作业
* 文件名: main.c
* 内容简述：该文件主要是通过一个程序主框架（main函数）调用多个头文件（同一目录），最终实现两个整数加减乘除模的运算。
* 版本号：3.0
* 编码：UTF-8
* 编译软件：DEV C++
* 01a 2024-10-11 陆熠-创建并编写该文件
* 01b 2024-10-15 许柏晗-修改代码主体框架
* 01c 2024-10-20 许正宇-修改代码报错
* 01d 2024-11-19 陆熠-修改代码注释规范
*/

/* 加入必要的头文件 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 
#include <time.h>
#include "My_Math_Choose.h" 

/* main代码主体部分 */ 
int main() 
{
	/* 设置超时时间，防止溢出 */
	int overtime=600;
	time_t start_time,current_time;
	/* 获取开始时间 */
	time(&start_time); 
	choose();
	/* 获取结束时间*/
	time(&current_time);
	if(difftime(current_time,start_time)>=overtime)
		printf("非常抱歉~，您的数字太大导致溢出了哦，换个小一点的数字再试试吧！"); 
	return 0;
}
