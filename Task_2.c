#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int printnumber(int upper, int lower, int count);
int main (int argc, char* argv[]){
    int upper = 10000;
    int lower = 0;
    int count;
    printf("Enter a number: \n");
    scanf("%d", &count);
    srand (time(0));
    printnumber (upper,lower,count);



    return 0;
}

int printnumber(int upper, int lower, int count){
    int arr[count];
    for (int i=0;i<count;i++){
        int num = (rand() % (upper-lower+1));
        arr[i]= num;
        printf("%d\n",arr[i]);

    }
}

