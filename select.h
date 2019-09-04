#ifndef SELECT_H
#define SELECT_H

#include "sort.h"
#include <iostream>

class SelectSort : public Sort {       
    public:
        SelectSort(int *elements, size_t size) : Sort(elements, size) {}
    void swap(int *a, int *b)
    {
        int temp = *a;
        *b = *a;
        *a = temp;
    }
        void execute() {
            int min=0;
            for(int i=0;i<size;i++){
                min=i;
            for(int j=i+1;j<size;j++){
              if(elements[j]<elements[min]) {
                  min = j; }
              swap(&elements[min],&elements[i]); }
            }
        }

        inline string name() { return "SelectSort"; }
};

#endif
