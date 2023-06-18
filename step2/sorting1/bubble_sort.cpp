#include <iostream>
using namespace std;


int main(){

    int arr[] = {13,46,24,52,20,9};
    int arr_len = sizeof(arr)/sizeof(int);

    for(int i=0;i<arr_len-1;i++){

        for(int j=0;j<arr_len-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }

    // print arr

    for(int i=0;i<arr_len;i++){
        cout << arr[i] << " ";
    }
    cout << endl;




}