/****************************************************************************
* 头文件名: My_Math_Divide()
* 功 能: 输入两个整数，返回两数之商
* 输 入: 两个整数
* 输 出: 两个整数之商
* 编码：UTF-8
* 编译软件：DEV C++
* 01a 2024-10-11 郑璨-创建并编写该文件
* 01b 2024-10-15 许柏晗-修改代码为头文件
* 01c 2024-11-19 陆熠-修改代码注释规范
*/

/* 预处理指令，防止头文件被重复包含 */
#ifndef My_Math_Divide 
/* 函数声明 */
int divide(int numerator, int denominator);
/* 简单除法函数 */
int divide(int numerator, int denominator)
{
    if(denominator == 0) 
	{
        printf("被除数不能为0.\n");
    } else
    {
        return numerator / denominator;
    }
}
#endif
