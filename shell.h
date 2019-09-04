#ifndef SHELL_H
#define SHELL_H

#include "sort.h"
#include <iostream>
class ShellSort : public Sort {       
    public:
        ShellSort(int *elements, size_t size) : Sort(elements, size) {}
    void swap(int *a, int *b)
    {
        int temp = *a;
        *b = *a;
        *a = temp;
    }
        void execute() {
            int temp;
            for(int i=size/2;i>0;i/=2){
                for(int j=i;j<size;j++){
                    for(int h=j-i;h >=0;h-=i){
                        if(elements[h+1]>=elements[h])break; else{
                            swap(&elements[h],&elements[h+1]);
                        }
                    }
                }
            }
        }

        inline string name() { return "ShellSort"; }
};

#endif
