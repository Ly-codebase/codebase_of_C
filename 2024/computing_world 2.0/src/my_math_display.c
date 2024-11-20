#include<stdio.h>
#include "my_math.h"

void display_compute(){
    printf("********************************\n");
	printf("------ 欢迎来到计算小世界！------\n");
	printf("********************************\n");
	printf("请您输入两个整数：\n");
    char inputStra[100]; // 假设输入的数字不会超过99位（加上可能的负号和终止符） 
    char inputStrb[100];
    int integerValuea,integerValueb;  
    // 提示用户输入一个数字  
    printf("请输入两个整数（可以是多位数）: ");  
    // 使用%s格式说明符读取一个字符串  
    scanf("%99s", inputStra); // 使用%99s来限制读取的字符数，防止缓冲区溢出 
    scanf("%99s", inputStrb); 
    // 使用atoi函数将字符串转换为整数   
    integerValuea = atoi(inputStra);
    integerValueb = atoi(inputStrb);
    //%lld
    //和差
    /*
    printf("两个整数的和差为：%lld",add_subtract(integerValuea,integerValueb));
    //积商
    printf("两个整数的积商为：%lld",multiply_divide(integerValuea,integerValueb));
    */
    //模 
    printf("两个整数的模为：%lld",Mod(integerValuea,integerValueb));
}
int main(){
    return 0;
}
