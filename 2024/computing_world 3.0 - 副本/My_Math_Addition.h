/****************************************************************************
* 头文件名: My_Math_Addition()
* 功 能: 输入两个整数，返回两数之和
* 输 入: 两个整数
* 输 出: 两个整数之和
* 编码：UTF-8
* 编译软件：DEV C++
* 01a 2024-10-11 张予歌-创建并编写该文件
* 01b 2024-10-15 许柏晗-修改代码为头文件
* 01c 2024-11-19 陆熠-修改代码注释规范
*/

/* 预处理指令，防止头文件被重复包含 */
#ifndef My_Math_Addition 
/* 函数声明 */
long long addition(long long a, long long b); 
/* 检查long long相加是否溢出 */
int is_overflow1(long long a, long long b) //������ 
{
    if((b > 0 && a > LLONG_MAX - b) || (b < 0 && a < LLONG_MIN - b)) 
    {
        /* 溢出返回1 */
        return 1;
    }
    /* 未溢出返回0 */
    return 0;
}
/* 加法模块 */
long long addition(long long a, long long b) 
{
    if(is_overflow1(a, -b))
    {
        printf("Error: addition operation causes overflow.\n");
        /* 返回最小值 */
        return LLONG_MAX; 
    } 
    else
    {
        /* 返回两数之和 */
        return a + b;
    }
}
#endif
