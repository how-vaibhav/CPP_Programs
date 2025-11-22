#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> num={5,3,7,9,1,3,6};


for(int i=0 ; i<num.size() ; i++){
    int smallIdx=i;
    for(int j=i+1 ; j<num.size() ; j++){
        if(num[smallIdx]>num[j])
        smallIdx=j;
    }
swap(num[smallIdx] , num[i]);
}

for(int i : num) cout<<i<< " ";
return 0;
}