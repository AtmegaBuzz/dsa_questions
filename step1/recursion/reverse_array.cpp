#include <iostream>
using namespace std;

int reverse(int arr[], int idx, int len){

    if(idx==len){
        cout << arr[idx] << " ";
        return 0;
    }

    reverse(arr,idx+1,len);
    cout << arr[idx] << " ";
    return 0;
}

int main(){

    int arr[] = {1,2,3,4,5};

    reverse(arr,0,4);

    return 1;
}