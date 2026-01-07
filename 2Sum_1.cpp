#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> arr ={5,2,11,7,15};
int target = 9;
for(int i=0 ; i<arr.size()-1 ; i++){
    for(int j=1 ; j<arr.size() ; j++){
            if(target == arr[i] + arr[j]) {
                cout<<"target found as : "<<arr[j] <<" + "<<arr[i]<<endl;
                return 0;
            }
    }
}
cout<<"Not Found";
return 0;
}