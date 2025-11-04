#include <stdio.h>

int main(int argc, char** argv) {
    double array[10];
    double sum = 0.0;
    for(int i= 0; i<10.0; i++){
        if (scanf("%lf", &array[i])!=1){
            return 2;
        }
    }
    for(int i=0;i<10;i++){
        sum += array[i];
    }
    double sa = sum/10.0;
    printf("%.2f",sa);
}