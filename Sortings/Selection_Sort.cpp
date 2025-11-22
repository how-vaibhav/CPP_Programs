#include<iostream>
#include<vector>
using namespace std;
void selection(vector <int> &num , int n){
    for(int i=0 ; i<n-1 ; i++){
        int smallIdx=i;
        for(int j = i+1 ; j<n;j++){
            if(num[smallIdx]>num[j]){ smallIdx = j ; }
        }
        swap(num[smallIdx] , num[i]);
    }
}


int main(){
    vector<int> num={5,3,7,9,1,3,6};
    int n = num.size();
    selection(num , n );
    cout<<"\n  Sorted Vector is :\n";
    for(int i : num){
        cout<<i<<"->";
    }
return 0;
}