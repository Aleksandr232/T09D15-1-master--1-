#include <stdio.h>
#include "data_io.h"


void input(double *data, int n) {
    int valid = 1;
    if (n >= 1) {
        for (int i = 0; i < n; i++) {
            if (scanf("%lf ", &data[i]) != 1) {
                valid = 0;
                break;
            }
        }
    } else {
        valid = 0;
    }

    if (!valid) {
        printf("n/a \n");
    }
}

void output(double *data, int n){
    for (int i = 0; i < n; i++) {
        printf("%lf ", data[i]);
    }
}