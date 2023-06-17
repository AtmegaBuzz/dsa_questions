#include <iostream>
#include <limits.h>
using namespace std;

int get_max(int arr[], int len){

    int max = INT_MIN;

    for(int i=0;i<len;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }

    return max;
}

int main(){

    int arr[] = {10,5,10,15,10,5,7,7,7,7};  
    int arr_len = sizeof(arr)/sizeof(int);
    int max = get_max(arr,arr_len);
    int hash_table[max+1] = {0};


    for(int i=0;i<arr_len;i++){
        hash_table[arr[i]] +=1;
    }

    // print lowest freq
    int min = INT_MAX;
    int min_value = 0;
    for(int i=0;i<max+1;i++){
        if(hash_table[i]!=0 && hash_table[i]<min){
            min = hash_table[i];
            min_value = i;
        }
    }

    cout << "lowest freq: " << min_value << endl;


    // print highest freq
    int max_i = INT_MIN;
    int max_value = 0;
    for(int i=0;i<max+1;i++){
        if(hash_table[i]>max_i){
            max_i = hash_table[i];
            max_value = i;
        }
    }

    cout << "Highest freq: " << max_value << endl;

    return 0;
}