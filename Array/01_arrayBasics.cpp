#include<iostream>
using namespace std;


void printArray(int arr[], int size){
    for(int i = 0 ; i<size; i++){
        cout<< arr[i]<<" ";
    }
}

int main(){
    
//   cout<<"Declaring an array here"<<endl;
    // int arr[15];

    // cout<<"here we are printing the element at 2 index : " << arr[2]<<endl <<endl;

    int second[3] = {1,2,4};
    int n = 3;

//    cout<<" size of second array is : "<< sizeof(second)/sizeof(int)<<endl;
    // cout<<"printing the value of index 2: " << second[2]<<endl <<endl;

    // for(int i = 0; i<n; i++ ){
    //     cout<<second[i]<<" "<<endl <<endl;
    // }

    printArray(second, 3);
    cout<<endl;

    int third[4]= {0};
    int n1 = 4;
    // for(int i = 0 ; i < n1 ; i++){
    //     cout<<third[i]<<" ";
    // }
    // cout<<"size of third array is : "<< sizeof(third)/sizeof(int);

    printArray(third, 4);

}