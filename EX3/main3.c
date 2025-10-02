#include <stdio.h>

int main()
{
    int i = 10; //output "IU"
    // int i = 3; //output "love"
    // int i = 30; //output "Love IU"
    // int i = 1; //output "1"
    
    if (i % 15 == 0){
        
        printf("Love IU");
    }
    else if (i % 5 == 0){
        
        printf("IU");
    }
    else if (i % 3 == 0){
        
        printf("Love");
    }
    else{
        printf("%d\n", i);
    }

    return 0;
}
