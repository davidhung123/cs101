#include <stdio.h>

int main()
{
    int i = 10; //output "偶數"
    // int i = 3; //output "奇數"
    
    // if (i % 2 == 0){
        
    //     printf("偶數");
    // }
    // else {
    //     printf("奇數");
    // }
    
    if (i & 1){
        printf("false"); //奇數
    }
    else {
        printf("true"); //偶數
    }

    return 0;
}
