#include <stdio.h>

int main()
{
    int i = 20; //output "免費"
    // int i = 40; //output "60元"
    // int i = 300; //output "240元"

    
    if (i >= 240){
        printf("240元");
    }
    else if (i <= 30){
        printf("免費");
    }
    else {
        if (i % 30){
            int h = ((i/30)+1) * 30;
            printf("%d元\n", h);
            
        }
        else{
            printf("%d元\n", i);
        }
    }
    return 0;
}
