#include <stdio.h>

int main()
{
    int i = 10; //否
    // int i = 8; //是
    
    if(i & (i-1)){
        
        printf("false");
    }
    else{
        
        printf("true");
    }

    return 0;
}
