#include <stdio.h>

int main(int argc, char** argv) {
    double A[10][3];
    double B[3][10];
    double C[10][10];
    printf("Vvedite matritsu A :\n");
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 3; j++){
          scanf("%lf", &A[i][j]);
        } 
    }
    printf("Vvedite matritsu B:\n");
    for (int i = 0; i < 3; i++){
       for (int j = 0; j < 10; j++){
           scanf("%lf", &B[i][j]);
       }   
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%.2f ", C[i][j]);
        }
    }
}