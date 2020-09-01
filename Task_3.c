#include <stdio.h>


int main(){
    /*
    FILE *fp;
    int s =5;
    fp = fopen("test.txt","w+");
    fprintf(fp,"This is testing for fprintf\n");
    fputs("Testing for a fputs\n",fp);
    
    fclose(fp);
    */
    FILE *fp;
    fp = fopen("test.txt", "r");
    char buff[255];
    fgets(buff, 255, fp);
    printf("1: %s", buff);
    fgets(buff, 255, fp);
    printf("2: %s", buff);
    return 0;
}