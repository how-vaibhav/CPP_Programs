//.........................PEAK INDEX :: Using linear search

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
// vector<int> n = {6,7,9,10,8,5};
// int m=n[0];


// for(int i=1 ; i<n.size() ; i++){
//         m=max(m,n[i]);
// }

// cout<<"Mountain Array is "<<m;
//     return 0;
// }

//............................using binary search

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> num={1,3,5,4,1};
    int st=1 , end=num.size()-2 ;


 while(st<=end){
    int mid=st+(end-st)/2;
    
    if(num[mid]>num[mid-1] && num[mid]>num[mid+1]){
        cout<<"Peak index is "<<mid;
        return 0;
    }

    if(num[mid]>num[mid-1]){ //increasing slop
            st=mid+1;

    }else{ //decreasing slop
            end=mid-1;
    }
}
return -1;
}