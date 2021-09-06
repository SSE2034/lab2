#include "my_compare.hh"
#include <iostream>

char isDuplicate(int biggest, int* num_arr){
    /* TODO: Your code goes here and fix existing code */   
    for(int i=0; i<3; i++){
        if(biggest = num_arr[i])
            return 'O';
    }

    return 'X';
}


int getBiggestNum(int* num_arr){
    /* TODO: Your code goes here and fix existing code */   
    if(num_arr[0] > num_arr[1] > num_arr[2])
        return num_arr[0];
    else if(num_arr[1] > num_arr[2] > num_arr[1])
        return num_arr[1];
    else if(num_arr[2] > num_arr[1] > num_arr[0])
        return num_arr[2];
}
