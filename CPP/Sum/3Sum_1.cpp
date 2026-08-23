#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
vector<int> nums = {-1, 0, 1, 2, -1, -4};
int n=nums.size();
set <vector<int>> s;

for(int i=0 ; i<n ; i++){
    for(int j=i+1 ; j<n; j++){
        for(int k =j+1 ;k<n ;k++){
            int sum = nums[i] + nums[j] + nums[k];
                if(sum==0){
                    vector<int> triplet ={nums[i] , nums[j] , nums[k]};
                    sort(triplet.begin() , triplet.end());
                    s.insert(triplet);
                }
        }
    }
}

//
for(auto x : s){
    cout<<"[";
    for(int i : x) cout<<i<<"  ";
    cout<<"] "<<endl;
}
}