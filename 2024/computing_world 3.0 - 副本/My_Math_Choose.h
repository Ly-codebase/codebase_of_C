/****************************************************************************
* 头文件名: My_Math_Choose()
* 功 能: 实现选择功能页面
* 输 入: 无
* 输 出: 用户选择页面
* 编码：UTF-8
* 编译软件：DEV C++
* 01a 2024-11-19 陆熠-创建并编写该文件，将其从主函数中打包成头文件
* 01b 2024-11-19 陆熠-修改代码注释规范
*/
#include "My_Math_Addition.h"
#include "My_Math_Subtraction.h"
#include "My_Math_Multiply.h"
#include "My_Math_Divide.h"
#include "My_Math_Mod.h"
/* 预处理指令，防止头文件被重复包含 */
#ifndef My_Math_Choose
/* 函数声明 */
void choose();
void choose()
{
    /* 打印引导界面 */
	printf("********************************\n");
	printf("------ 欢迎来到计算小世界！------\n");
	printf("********************************\n");
	/* 假设输入的数字不会超过99位（加上负号和终止符） */
    char inputStra[100]; 
    char inputStrb[100];
    int integerValuea,integerValueb;  
    /* 提示用户输入数字 */ 
    printf("请输入两个整数（可以是多位数）:");  
    /* 使用%s格式说明符读取一个字符串 */
	/* 用%99s来限制读取的字符数，防止缓冲区溢出 */
    scanf("%99s", inputStra);  
    scanf("%99s", inputStrb); 
    /* 使用atoi函数将字符串转换为整数 */
    integerValuea = atoi(inputStra);
    integerValueb = atoi(inputStrb);
    int i;
	printf("请给出你需要这两数进行的运算：\n");
	printf("加法请输入1\n");
	printf("减法请输入2\n");
	printf("乘法请输入3\n");
	printf("除法请输入4\n");
	printf("模除请输入5\n");
	scanf("%d",&i);
	/* 使用switch进行选择 */
	switch(i)
	{
		case 1: printf("两数之和为：%d\n",addition(integerValuea,integerValueb));
				break;
		case 2: printf("两数之差为：%d\n",subtraction(integerValuea,integerValueb));
				break;
		case 3: printf("两数之积为：%d\n",multiply(integerValuea,integerValueb));
				break;
		case 4: printf("两数之商为：%d\n",divide(integerValuea,integerValueb));
				break;
		case 5: printf("两数之模为：%d\n",Mod(integerValuea,integerValueb));
				break;
		default:printf("你在耍我是吗,输入1-5!"); 
	}
}
#endif