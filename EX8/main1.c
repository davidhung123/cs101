#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);  //從輸入讀取要產生的樂透組數
    srand(1);  //固定亂數種子，否則 Judge 結果會不同
    //開啟作答
    if(n<1){
        n = 1;
    }
    if(n>5){
        n = 5;
    }
    
    FILE* fp;
    
    fp = fopen("lotto.txt", "w+");
    fprintf(fp, "========= lotto649 =========\n");
    
    for(int i = 1; i <= n; i++){
        fprintf(fp, "[%d]: ", i);
        
        int used[70] = {0};
        
        for(int j = 0; j < 7; j++){
            int num;
            do{
                num = rand()%69 + 1;
            }
            while(used[num]);
            
            used[num] = 1;
            fprintf(fp, "%02d", num);
            
            if(j != 6){
                fprintf(fp, " ");
            }
        }
        
        fprintf(fp, "\n");
    }
    
    for(int i = n+1; i <= 5; i++){
        fprintf(fp, "[%d]: ", i);
        
        fprintf(fp, "__ __ __ __ __ __ __\n");
        
    }
    fprintf(fp, "========= csie@CGU =========\n");
    
    fclose(fp);
    
    int w1, w2, w3;
    
    printf("請輸入中獎號碼三個 : ");
    scanf("%d %d %d", &w1, &w2, &w3);

    printf("輸入中獎號碼為 : %02d %02d %02d\n", w1, w2, w3);
    printf("以下為中獎彩卷 : \n");

    fp = fopen("lotto.txt", "r");

    char line[256];
    while (fgets(line, sizeof(line), fp)) {
            if (line[0] != '[') continue; // 只處理票券行
            if (strstr(line, "__")) continue; // 跳過未售出票券行

        int id;
        char t[7][8];
        if (sscanf(line, "[%d]: %7s %7s %7s %7s %7s %7s %7s",&id, t[0], t[1], t[2], t[3], t[4], t[5], t[6]) == 8) {
                int matched = 0;
            for (int k = 0; k < 7; k++) {
                if (strcmp(t[k], "__") == 0) continue;
                int val = atoi(t[k]); // 轉成整數比對
                if (val == w1 || val == w2 || val == w3) {
                    matched = 1;
                    break;
                }
            }
            if (matched) {
                fputs(line, stdout); // 原樣輸出該中獎彩券整行
            }
        }
    }
    fclose(fp);
    return 0;
}
