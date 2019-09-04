#ifndef BUBBLE_H
#define BUBBLE_H

#include "sort.h"
#include <algorithm>
#include <vector>
#include <iostream>

class BubbleSort : public Sort {       
    public:
        BubbleSort(int *elements, size_t size) : Sort(elements, size) {}
    void swap(int *a, int *b)
    {
            int temp = *a;
            *b = *a;
            *a = temp;
    }
    void execute() {
            int i, j;
            for (i = 0; i<size; i++){
                for (j = 0; j < size; j++){ 
                    if (elements[j] > elements[j+1])
                        swap(&elements[j], &elements[j+1]);}}



        }

        inline string name() { return "BubbleSort"; }
};

#endif
