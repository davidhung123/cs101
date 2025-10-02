#include <stdio.h>

int main()
{
    int i = 1000; //output "70元"
    // int i = 1540; //output "80元"
    // int i = 3000; //output "220元"

    
    // if (i <= 1500){
    //     printf("70元");
    // }
    // else {
    //     if (i % 100){
    //         int h = (((i/100)+1) -15) * 10 + 70;
    //         printf("%d元\n", h);
            
    //     }
    //     else{
    //         int k = ((i/100)-15) * 10 + 70;
    //         printf("%d元\n", k);
    //     }
    // }
    
    if (i <= 1500){
        printf("70元");
    }
    else {
        int n = i - 1500;
        if (i % 100){
            int h = ((n/100)+1) * 10;
            printf("%d元\n", 70 + h);
            
        }
        else{
            printf("%d元\n", (n/100) * 10 + 70);
        }
    }
    return 0;
}
