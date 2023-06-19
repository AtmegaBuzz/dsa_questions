#include <iostream>
using namespace std;



void quickSort(int arr[], int start,int end){

    if(start==end) return;

    int pivot = start;
    int l = 0;
    int h = end;

    while(l<h){
        if(arr[l] < arr[pivot]){
            l++;
        }
        if(arr[h] > arr[pivot]){
            h--;
        }

        if(arr[l] > arr[h]){
            swap(arr[l],arr[h]);
        }
    }
    
    quickSort(arr,start,pivot);
    quickSort(arr,pivot+1,end);

}




int main(){
    int arr[] = {5,4,3,2,1};
    quickSort(arr,0,5);

    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }   

    return 0;

}