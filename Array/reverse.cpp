#include<iostream>
using namespace std;

//  void reverse(int arr[], int size){
//     for(int i =size-1 ; i >=0; i--){
//        cout<<arr[i]<<" ";
//     }
//  }

void printArray(int arr[], int size){
    for(int i =0 ; i<size; i++){
        cout<<arr[i]<< " ";
    }
}

void reverse(int arr[], int size){
    int start = 0; int end = size-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){

    int n;
    cin>>n ;
    
   int arr[100];

    for(int i = 0 ; i<n; i++ ){
        cin>> arr[i];
    }


    reverse(arr, n);
    printArray(arr, n);

}