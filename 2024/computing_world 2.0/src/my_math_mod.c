#include<stdio.h>
#include "my_math.h"

long long int Mod(int a,int b){
	long long int result;
	if (b != 0) {  
        result = a % b;  
        printf("%d %% %d = %d\n", a, b, result);  
    } else {  
        printf("错误：模数不能为零。\n");
		return 0;  
    }  
    return result;  
}
