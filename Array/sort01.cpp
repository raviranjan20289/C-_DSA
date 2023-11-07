#include<iostream>
using namespace std;


void printArray(int arr[], int size){
    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortOne(int arr[], int n){
    int left = 0, right = n-1;

    while(left< right){

        while(arr[left] == 0 ){
            left++;
        }

        while(arr[right] == 1){
            right --;
        }

        if(left < right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}


int main(){

    int arr[10] = {1,1,0,1,0,0,1,1,0,0};

    sortOne(arr, 10);
    printArray(arr, 10);
}