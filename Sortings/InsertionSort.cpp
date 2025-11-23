#include<iostream>
#include<vector>
using namespace std;
void insert(vector<int> &num , int n){
    for(int i = 0 ; i<n ; i++){
        int j=i-1;
        int key = num[i];
        while(key<num[j] && j>=0 ){
            num[j+1]=num[j];
            j--;
        }
            num[j+1]=key;
    }
}



int main(){
    vector<int> num ={5,3,6,1,7,4,9,2};
    int n = num.size();
    insert(num , n);

    for(int i : num)
    cout<<i<<" ";
}