#include<iostream>
using namespace std;


int getSum(int arr[], int size){
    int sum = 0;
  for(int i = 0; i <size; i++){
      sum += arr[i];
  }

  return sum;
}

int main(){

  int n;
  cin>>n;

  int nums[100];

  for(int i =0; i <n; i++){
    cin>> nums[i];
  }

  cout<<"sum of the elements are: " << getSum(nums, n);
  

}