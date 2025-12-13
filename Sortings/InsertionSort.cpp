#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> &num , int n){

    for(int i = 0 ; i <n ; i++){
       int j=i-1;
       int key = num[i];
        while(j>=0 && key<num[j]){
            num[j+1]=num[j];
            j--;
        }
        num[j+1]=key;
    }
}

int main(){
    vector<int> num = {1,4,3,2,8,7,6,10};
    int n = num.size();
    sort(num, n);
    
    for (int i : num){
        cout<<i<<" ";
    }

}