#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    // Input array
    vector<int> num = {9, 4, 20, 3, 10, 5};

    // This will store all subarrays whose sum equals target
    vector<vector<int>> ans;

    int target = 33;
    int n = num.size();

    // Fix starting index
    for(int i = 0; i < n; i++){

        int sum = 0;              // reset sum for each new start
        vector<int> subset;      // stores current subarray

        // Extend subarray from index i
        for(int j = i; j < n; j++){

            sum += num[j];
            subset.push_back(num[j]);

            // If sum matches target, store the subarray
            if(sum == target){
                ans.push_back(subset);
                break;  // stop further expansion
            }

            // If sum exceeds target, no need to continue
            if(sum > target)
                break;
        }
    }

    // OUTPUT
    for(auto x : ans){
        cout << "[ ";
        for(int y : x)
            cout << y << " ";
        cout << "]\n";
    }

    return 0;
}
