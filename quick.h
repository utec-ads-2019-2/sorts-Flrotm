#ifndef QUICK_H
#define QUICK_H

#include "sort.h"

class QuickSort : public Sort {
public:
    QuickSort(int *elements, size_t size) : Sort(elements, size) {}

    void execute(){
        quickSort(0,size-1);
    }
    void quickSort(int low, int high){
        if(low < high){
            int i=partition(low, high);
            quickSort(low,i-1);
            quickSort(i+1,high);
        }
    }

    int partition(int low, int high){
        int pivot = elements[low];
        int i=low;
        int j=high;

        while(i<j){
            while(pivot<elements[j]){
                j--;}
            while(i<j and elements[i]<=pivot){
                i++;}
            if(i<j){
                swap(elements[i],elements[j]);}
        }
        swap(elements[j],elements[low]);
        return (i);

    }

    inline string name() { return "QuickSort"; }
};

#endif
