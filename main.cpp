#include <iostream>
#include <vector>

#include "bubblesort.h"
#include "quicksort.h"
#include "testclass.h"

int main() {
    int a[] = {3,99,2,8,6,3};
    //quicksort::qs(a,0,5);
    bubblesort test;
    test.bs(a,6);
    std::vector<int> innn;
    innn.push_back(11);
    std::cout << innn[0]<<std::endl;
    for (int i = 0; i < 6; i++) {
        std::cout << a[i] << " ";
    }


}
