#include<stdio.h>

int main(){
    FILE *fp = fopen("students.txt","r");
    if(!fp) return 1;


    char buf[100];
    char name[50];
    int score;

    while (fgets(buf, sizeof(buf), fp)) {
        sscanf(buf, "%s %d", name, &score);
        printf("이름: %s, 점수: %d\n", name, score);
    }

    fclose(fp);
    
}