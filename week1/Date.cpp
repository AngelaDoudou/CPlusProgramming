#include <stdlib.h>
#include "Date.h"
bool CreatePoints(Date* darr, const int size){
    if(size < 0) return false;
    srand((int)time(0));
    for(int i = 0; i < size; ++i){
        darr[i].year = rand()%3000; //from 0 year to 2999 year
        darr[i].month = rand()%12 + 1; //from 1 to 12
        if(darr[i].month == 2){
            darr[i].day = rand()%28 + 1;//ignore day 29
        }else{
            darr[i].day = rand()%30 + 1;//ignore day 31
        }
    }
    return true;
}

void Sort(Date *arr, const int size){
    for(int i = 0; i < size; ++i){
        for(int j = i+1; j < size; ++j){
            if(arr[i] > arr[j]){
                Date tmp(arr[i]);
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main(int argc,char **argv){
    Date arrDate[10];
    if(CreatePoints(arrDate, 10)){
        Sort(arrDate, 10);
        for(int i = 0; i < 10; ++i){
            arrDate[i].print();
        }
    }
    return 0;
}
