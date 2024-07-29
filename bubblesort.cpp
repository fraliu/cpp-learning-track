//
// Created by 10480 on 2024/7/12.
//

#include "bubblesort.h"

void bubblesort::bs(int *a, int len) {
    for(int i = 0;i<len;i++) {
        for(int j =0;j<len-i-1;j++) {
            if(a[j]>a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }

        }
    }
}
