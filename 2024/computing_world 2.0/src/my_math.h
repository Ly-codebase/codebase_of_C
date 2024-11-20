#ifndef MY_MATH_H 
/*
这是一个“如果没有定义”指令。
它检查宏MATH_H是否未被定义。
如果MATH_H未定义，则编译器会继续处理接下来的指令，直到遇到#endif。
*/
#define MY_MATH_H
/*
这是一个“定义”指令。它定义了宏MATH_H。
一旦这个宏被定义，它在当前编译单元（通常是当前文件及其包含的所有头文件）的其余部分中都被视为已定义。
*/
/*自定义函数申明 */ 
//选择程序
//和差
/*
int add_subtract();
//积商
int multiply_divide();
*/
//模 
long long int Mod(int a,int b);

#endif // MY_MATH_H 