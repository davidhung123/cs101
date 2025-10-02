#include <stdio.h>

int main()
{
    int x = 9;
    int y = 9;
    int z = 1;
    // output 991
    // int x = 1;
    // int y = 2;
    // int z = 3;
    // output 123
    
    if(x < 0){
        int sum = (x * (-1) * 100) + y * 10 + z;
        
        printf("%d\n", sum * (-1));
    }
    else{
        int k = x * 100 + y * 10 + z;
    
        printf("%d\n", k);
    }

    return 0;
}
