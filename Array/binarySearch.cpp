#include<iostream>
using namespace std;



int binarySearch(int arr[], int size, int key){
    int start = 0 ; 
    int end = size -1;
    int mid = (start + end)/2;

    while(start<=end){

        if(arr[mid] == key){
            return mid;
        }

        if(key  > arr[mid]){
            start = mid + 1;
        }else{
           end = mid -1;
        }

        mid = (start + end)/2;
    }
    return -1;
}

int main(){

    int even[8] = {2,4,6,8,12,16};

    int odd[5] = {4,5,6,9,11};

    int evenIndex = binarySearch(even , 8, 13);
    cout<<" index of 13 is :"<< evenIndex <<endl;
    int oddIndex = binarySearch(odd, 5, 1);
    cout<<"Index of 1 is :" << oddIndex << endl;

    return 0;

}