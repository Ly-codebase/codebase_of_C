/****************************************************************************
* 头文件名: My_Math_Subtraction()
* 功 能: 输入两个整数，返回两数之差
* 输 入: 两个整数
* 输 出: 两个整数之差
* 编码：UTF-8
* 编译软件：DEV C++
* 01a 2024-10-11 张予歌-创建并编写该文件
* 01b 2024-10-15 许柏晗-修改代码为头文件
* 01c 2024-11-19 陆熠-修改代码注释规范
*/

/* 预处理指令，防止头文件被重复包含 */
#ifndef My_Math_Subtraction 
/* 函数声明 */
long long subtraction(long long a, long long b);
/* 检查long long相减是否溢出 */
int is_overflow2(long long a, long long b) 
{
    if((b > 0 && a < LLONG_MIN + b) || (b < 0 && a > LLONG_MAX + b)) 
	{
         /* 溢出返回1 */
        return 1;
    }
     /* 未溢出返回0 */
    return 0; 
}
/* 减法模块 */
long long subtraction(long long a, long long b) 
{
    if(is_overflow2(a, b))
    {
        printf("Error: subtraction operation causes overflow.\n");
        /* 返回最小值 */
        return LLONG_MIN; 
    } 
    else 
    {
        /* 返回两数之差 */
        return a - b;
    }
}
#endif
