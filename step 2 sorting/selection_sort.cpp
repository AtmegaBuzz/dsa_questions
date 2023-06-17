#include <iostream>
#include <limits.h>
using namespace std;


void print_arr(int arr[],int len){
    
    for(int i=0;i<len;i++){
        cout << arr[i] << " ";
    }

}
int get_min_idx(int arr[],int start,int len){


    int min = INT_MAX;
    int min_indx = 0;

    for(int i=start;i<len; i++){

        if (arr[i]<min){
            min = arr[i];
            min_indx = i;
        }

    }

    return min_indx;
}

int main(){

    int arr[] = {-5,4,-3,2,1};
    int s_i = 0;
    int end = sizeof(arr)/sizeof(int);
    

    while(s_i<end-1){

        int min_idx = get_min_idx(arr,s_i+1,end);
        if (arr[s_i]>arr[min_idx]){
            int temp = arr[s_i];
            arr[s_i] = arr[min_idx];
            arr[min_idx] = temp;
        }
        s_i++;
    }

    print_arr(arr,end);

    return 1;
}