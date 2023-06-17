#include <iostream>
using namespace std;


int main(){

    // create triangle

    for(int i=0;i<5;i++){

        for(int j=0;j<i+1;j++){
            cout << "*";
        }
        cout << endl;

    }

    // create reverse triangle

    for(int i=0; i<5; i++){

        for(int j=5-i;j>0;j--){
            cout << "*";
        }

        cout << endl;

    }


    return 0;
}