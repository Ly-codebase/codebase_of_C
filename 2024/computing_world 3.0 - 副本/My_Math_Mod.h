/****************************************************************************
* 头文件名: My_Math_Mod()
* 功 能: 输入两个整数，返回两数之模
* 输 入: 两个整数
* 输 出: 两个整数之模
* 编码：UTF-8
* 编译软件：DEV C++
* 01a 2024-10-11 陆熠-创建并编写该文件
* 01b 2024-10-15 许柏晗-修改代码为头文件
* 01c 2024-11-19 陆熠-修改代码注释规范
*/

/* 预处理指令，防止头文件被重复包含 */
#ifndef My_Math_Mod 
/* 函数声明 */
int Mod(int a,int b);
/* 模函数 */
Mod(int a,int b)
{
	int result;
	if (b != 0) 
    {  
        result = a % b;  
        return result;
    } 
    else 
    {  
        printf("错误:模数不能为0.\n");
		return 0;  
    }  
    return result;  
}
#endif