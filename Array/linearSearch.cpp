#include<iostream>
using namespace std;


bool search(int arr[],int nums,  int size){
    for(int i =0; i<size; i++){
        if(arr[i]== nums){
            return 1;
        }
    }
    return 0;
}

int main(){

    int n;
    cin>>n;

    int nums[100];


    for(int i= 0; i <n; i++){
        cin>> nums[i];
    };

    int num;
    cin>>num;

    // cout<<search(nums, num, n);

    bool found = search(nums, num, n);

    if(found){
        cout<<"key is present"<<endl;
    }else{
        cout<<"key is not present";
    }

 
}