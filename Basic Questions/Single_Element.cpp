#include<iostream>
#include<vector>
using namespace std;

//...............You can also use bitwise and linear search but it is already sorted array
int main(){
vector<int> num={1,1,2,2,3,3,4,4};
int st=0 , end=num.size()-1 ;
while(st<=end){

    int mid=st+(end-st)/2;
    if(num[mid] != num[mid+1] && num[mid] != num[mid-1] ){
        cout<<"Single element is "<<num[mid];
        return 0;
    }

    if(mid%2==0){

      num[mid]==num[mid-1] ?  end=mid-1 : st=mid+1;

    }else{
      num[mid]==num[mid-1] ?  st=mid+1 : end=mid-1;

    }
}

    return -1;
}