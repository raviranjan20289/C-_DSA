#include<iostream>
#include<unordered_map>
using namespace std;



int main(){
    unordered_map<string, int> m;
    int n;
    cin>> n;

    for(int i = 0 ; i<n; i++){
        string s ;
        cin>> s;
     
    //    m[s] = m[s]+1;
       m[s]++;
    }
   for(auto pr: m){
    cout<<endl;
    cout<<pr.first << " "
<< pr.second<<endl;
   }
}