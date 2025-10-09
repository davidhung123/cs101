#include <stdio.h>

int main()
{
    FILE* fp;
    
    int a[] = {0, 1, 2};
    int p[3];
    char b[] = "ABC";
    char q[sizeof(b)];
    float c[] = {1.1, 1.2, 1.3};
    float r[3];
    
    fp = fopen("a.bin", "wb+");
    fwrite(a, sizeof(int), 3, fp);
    
    fseek(fp, 0, SEEK_SET);
    fread(p, sizeof(int), 3, fp);
    
    for(int i = 0; i < 3; i++){
        printf("%d ", p[i]);
    }
    printf("\n");
    
    fwrite(b, sizeof(b)-1, 1, fp);
    fseek(fp, sizeof(a), SEEK_SET);
    fread(q, sizeof(b)-1, 1, fp);
    
    for(int i = 0; i < 3; i++){
        printf("%c ", q[i]);
    }
    printf("\n");
    
    fwrite(c, sizeof(float), 3, fp);
    
    fseek(fp, sizeof(a) + sizeof(b)-1, SEEK_SET);
    fread(r, sizeof(float), 3, fp);
    
    for(int i = 0; i < 3; i++){
        printf("%f ", r[i]);
    }
    printf("\n");
    
    fclose(fp);

    return 0;
}
