#include <stdio.h>
#include <stdlib.h>
void sdvig(double arr[], int n, int k) {
    if (n <= 1 || k == 0) return;

    k = k % n;
    if (k < 0) k += n;

    double temp[n];
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main(int argc, char** argv) {
    double array[10];
    for(int i= 0; i<10; i++){
        scanf("%lf", &array[i]);
    }
    int k = atoi(argv[1]);
    sdvig(array,10,k);
    for( int i=0;i<10;i++){
        printf("%.2f\n",array[i]);
    }
}