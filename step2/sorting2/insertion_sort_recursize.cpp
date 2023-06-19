#include <iostream>
using namespace std;

void recursionSort(int arr[], int n, int s){

    if(s==n) return;
    for(int j=s+1;j>0;j--){
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }
    }

    recursionSort(arr,n,s+1);
         
}

int main(){

    int arr[] = {5,4,3,2,1};
    recursionSort(arr,5,1);

    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }


    return 0;
}