#ifndef INSERT_H
#define INSERT_H

#include "sort.h"
#include <iostream>

class InsertSort : public Sort {       
    public:
        InsertSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            int j,k=0;
            for(int i=0;i<size;i++){
                k=elements[i];
                j=i-1;

                while(j >= 0 and elements[j]>k){
                    elements[j+1]=elements[j];
                    j--;
                }
                elements[j+1]=k;

            }
        }

        inline string name() { return "InsertSort"; }
};

#endif
