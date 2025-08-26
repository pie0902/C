#include <stdio.h>

int main() {
    FILE *fp = fopen("hello.txt", "w");  // FLIE ❌ → FILE ✅
    if (!fp) return 1;

    char *str = "ABCDE";
    for(int i = 0; str[i] != '\0'; i++){
        fputc(str[i],fp);
    }
    fputc('\n', fp);
    fclose(fp);
    return 0;
}
