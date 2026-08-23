#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
vector<int> arr ={5,2,11,7,15};
int target = 9;
sort(arr.begin(), arr.end());


int sum = 0;
int i=0 ,j=arr.size()-1;
while(sum!= target){
sum = arr[i] + arr[j];
if(sum == target){
    cout<<"Found the target ----> "<<sum<<endl;
    return 0;
 }else if(sum>target)j--;
 else i++;
}


}