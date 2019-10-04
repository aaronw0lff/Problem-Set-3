#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int checkPrimes(int num){

    int dataarray[num];
    int toplimit = (int)sqrt(num);
   // printf("toplimit=%d\n",toplimit);
    dataarray[0]=0;
    dataarray[1]=0;
    for(int i=2; i < num; i++){ 
        dataarray[i]=1;
       // printf("%d:%d ", i, dataarray[i]);
    }


    for(int i=2; i < toplimit; i++){
        if(dataarray[i]){
            for(int j=pow(i, 2); j < num; j+=i){
              //  printf("j=%d, i=%d\n", j, i);
                dataarray[j]=0;
            }

        }
    }
          //find primes here
          //see results
          printf("\n");
    for(int i=0; i < num; i++){
        if(dataarray[i]){ 
            printf("%d  ", i);
        }
    }
printf("\n");


    return 0;
}
int main(int argc, char *argv[])
{
int x;
int n;
printf("Enter a number: ");
scanf("%d", &n);
x = checkPrimes(n);



    return x;
}
