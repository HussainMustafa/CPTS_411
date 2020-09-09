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
   //-------------------
   /*
    FILE *fp;
    fp = fopen("test.txt", "r");
    char buff[255];
    fscanf(fp, "%s", buff);
    printf("0: %s\n", buff);
    fgets(buff, 255, fp);
    printf("1: %s", buff);
    fgets(buff, 255, fp);
    printf("2: %s", buff);
    fclose(fp);
    return 0;
    */
   FILE *fp;
   fp = fopen("array.txt", "w+");
   int i;
   for (i=33;i<100;i++){
       fputc(i,fp);
   }
   fclose(fp);
   FILE *fp1;
   fp1 = fopen("array.txt", "r");
   int j;
   int k;
   int arr[68];
   for (j=0;j<67;j++){
       k= fgetc(fp1);
       arr[j] = k;
       printf("%d ",k);

   }
   printf("\nPlease print a specific number: \n");
   printf("%d",arr[3]);
   printf("\naverage num of the array\n");
   int sum= 0;
   for (int r=0;r<67;r++){
       sum = sum +arr[r];
   }
   sum = sum/68;
   printf("%d",sum);
   int max = arr[0];
   printf("\nMaxinum Number: %d %d", max, arr[6]);
   for (int s= 0;s<67;s++){
       
       if (arr[s]> max){
           max = arr[s];
       }


   }
   printf("\nMaxinum Number: %d", max);
   fclose(fp);
   return 0;
}