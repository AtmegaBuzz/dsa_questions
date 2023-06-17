#include <iostream>
#include <vector>
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

    int arr[] = {10,5,10,15,10,5,7};  
    int arr_len = sizeof(arr)/sizeof(int);
    int max = get_max(arr,arr_len);
    int hash_table[max+1] = {0};

    // cout frq in hash

    for(int i=0;i<arr_len;i++){
        hash_table[arr[i]] +=1;
    }

    // print count 

    for(int i=0;i<max+1;i++){
        int count = hash_table[i];
        // cout << count;
        if(count>0){
            cout << i << " = " << count << endl;
        }
    }



    return 0;
}