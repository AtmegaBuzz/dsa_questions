#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void merge(int arr[],int start, int mid, int end){


    int l_size = mid-start+1;
    int left[l_size];

    int r_size = end-(mid+1) + 1;
    int right[r_size];

    for(int i=0;i<l_size;i++){
        left[i] = arr[start+i];
    }

    for(int i=0;i<r_size;i++){
        right[i] = arr[mid+1+i];
    }

    left[l_size] = right[r_size] = INT_MAX;
    int l_i = 0;
    int r_i = 0;

    for(int i=start;i<=end;i++){
        if(left[l_i] < right[r_i]){
            arr[i] = left[l_i];
            l_i++;
        }
        else{
            arr[i] = right[r_i];
            r_i++;
        }
    }



}

void mergeSort(int arr[],int start,int end){

    // cout << start << " " << end << endl;

    if(start==end) return;

    int mid = (start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);    

}


int main(){

    int arr[] = {4, 1 ,3, 9, 7};
    mergeSort(arr,0,5);

    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }


    return 0;
}
