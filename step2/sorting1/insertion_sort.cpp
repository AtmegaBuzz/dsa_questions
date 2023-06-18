#include <iostream>
using namespace std;

// insertion sort 

// 13,46|24,52,20,9

int main(){


    int arr[] = {13,46,24,52,20,9};
    int arr_len = sizeof(arr)/sizeof(int);
    int sorted = 0;

    while(sorted<arr_len-1){
        int curr_elem = arr[sorted+1];

        for(int i=sorted;i>=0;i--){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }

        sorted++;
            
    }
    
    // print arr

    for(int i=0;i<arr_len;i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    return 1;
}