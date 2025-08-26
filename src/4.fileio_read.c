#include<stdio.h>

int main(){
    FILE *fp = fopen("hello.txt","r");
    
    if(!fp) return 1;
    
    int ch;
    
    while ((ch = fgetc(fp)) != EOF) {
    putchar(ch);
}

    fclose(fp);
    return 0;


}