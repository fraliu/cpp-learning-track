//
// Created by 10480 on 2024/7/11.
//

#include "quicksort.h"
void quicksort::qs(int *a, int left, int right) {
    if(left>=right)
        return;
    int middle;
    middle = getmiddle(a, left, right);
    qs(a,left,middle-1);
    qs(a,middle+1,right);
}

int quicksort::getmiddle(int *a, int left, int right) {

    int pivot = a[left];

    while(left<right) {
        while(left<right&&a[right]>=pivot)
            right--;
        a[left] = a [right];
        while(left<right&&a[left]<=pivot)
            left++;
        a[right] = a[left];
    }
    a[left] = pivot;
    return left;
}

void quicksort::test(int *a) {
    a[0]++;

}


