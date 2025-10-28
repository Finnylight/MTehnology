#include <stdio.h>
#include "bubble.h"
#include "insertion.h"
#include "selection.h"
#include<bits/stdc++.h>
int main() {
    int n, i;
    int a[100], b[100], c[100]; 

    printf("Хэдэн тоо оруулах вэ: ");
    scanf("%d", &n);

    printf("Тоонуудыг оруул: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
//sadsadasdsa
    for (i = 0; i < n; i++) {
        b[i] = a[i];
        c[i] = a[i];
    }

    bubble_sort(a, n);
    printf("\nBubble Sort:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }




    
    printf("\n");

    insertion_sort(b, n);
    printf("\nInsertion Sort:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    selection_sort(c, n);
    printf("\nSelection Sort:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
