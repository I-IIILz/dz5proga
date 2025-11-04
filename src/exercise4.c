#include <stdio.h>
#include <stdlib.h>
 void sdvig(double arr[],int n,int k, int x) {
    for (int i = n - 1; i > 0; i--) {
        if(i==k) arr[i] = x;
        else{
        arr[i] = arr[i - 1];
        }
    }
}

int main(int argc, char** argv) {
    double array[10];
    for(int i= 0; i<10; i++){
        scanf("%lf", &array[i]);
    }
    int k = atoi(argv[1]);
    int x = atoi(argv[2]);
    sdvig(array,10,k,x);
    for( int i=1;i<10;i++){
        printf("%.2f\n",array[i]);
    }
}