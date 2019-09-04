
#ifndef COUNTING_H
#define COUNTING_H

#include "sort.h"
#include <algorithm>

class CountingSort : public Sort {
public:
    CountingSort(int *elements, size_t size) : Sort(elements, size) {}

    void execute() {
        int max = 0;

        for(int i=0; i<size; i++){
            if(max < elements[i]){
                max = elements[i];
            }
        }

        int cuenta[max];
        int salida[size];

        for(int i=0; i<max; i++){
            cuenta[i]=0; }
        for(int i=0; i<size; i++){
            cuenta[elements[i]-1]++; }
        for(int i=1; i<max+1; i++){
            cuenta[i]+=cuenta[i-1]; }
      for(int i=0; i<size; i++){
            salida[cuenta[elements[i]-1]-1]= elements[i];
            cuenta[elements[i]-1]--;
        }

        for(int i=0; i<size; i++){
            elements[i]=salida[i];}
    }

    inline string name() { return "CountingSort"; }
};

#endif
