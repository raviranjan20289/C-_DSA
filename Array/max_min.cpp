#include<iostream>
using namespace std;

int minNumber(int arr[], int n){
    int mini = INT_MAX;

     
    for(int i = 0; i <n; i++){
         mini = min(mini, arr[i]);
        // if(arr[i] < mini){
        //      mini = arr[i];
        // }
     
    }
    return mini;

}


int maxNumber(int arr[], int size){
    int maxi = INT_MIN;
    for(int i = 0 ; i< size; i++){
        maxi = max(maxi, arr[i]);
        // if(arr[i] > maxi){
        //     maxi = arr[i];
        // }
    }
    return maxi;
}

int main(){

    // int arr[4]= {12,32, 42, 2};

    int n ;
    cin>> n;
    int arr[100];

    cout<<"please enter the size of the array"<<endl;

    for(int i = 0 ; i< n; i++){
        cin>>arr[i];
    };

    cout<<"maximum value is: "<< maxNumber(arr, n)<<endl;
    cout<<"minimum value is : "<< minNumber(arr, n)<<endl;




}