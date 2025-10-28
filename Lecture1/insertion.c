#include "insertion.h"

   void insertion_sort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i; j > 0 && a[j-1] > a[j]; j--) {
            temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
        }
    }
}