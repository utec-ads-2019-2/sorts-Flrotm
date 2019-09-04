#ifndef MERGE_H
#define MERGE_H

#include "sort.h"

class MergeSort : public Sort {
public:
    MergeSort(int *elements, size_t size) : Sort(elements, size) {}

    void merge(int* elements, int l, int m, int r) {
        int i, j, k;
        int n1 = m - l + 1;
        int n2 =  r - m;

        int L[n1], R[n2];

        for (i = 0; i < n1; i++){
            L[i] = elements[l + i];
        }
        for (j = 0; j < n2; j++){
            R[j] = elements[m + 1+ j];
        }

        i = 0;
        j = 0;
        k = l;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                elements[k] = L[i];
                i++;
            }
            else{
                elements[k] = R[j];
                j++;
            }
            k++;
        }

        while (i < n1){
            elements[k] = L[i];
            i++;
            k++;
        }

        while (j < n2) {
            elements[k] = R[j];
            j++;
            k++;
        }
    }

    void mSort(int* elements, int l, int r){
        if (l < r) {

            int m = l+(r-l)/2;

            mSort(elements, l, m);
            mSort(elements, m+1, r);

            merge(elements, l, m, r);
        }
    }

    void execute() {
        mSort(elements, 0, size - 1);
    }

    inline string name() { return "MergeSort"; }
};

#endif
