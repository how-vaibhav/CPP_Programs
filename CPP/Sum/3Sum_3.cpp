#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    // Input array (can contain positive, negative and duplicate values)
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    // This will store all unique triplets whose sum is 0
    vector<vector<int>> ans;

    // Step 1: Sort the array
    // Sorting helps in:
    // 1) Using two-pointer technique
    // 2) Skipping duplicate elements easily
    sort(nums.begin(), nums.end());

    // Step 2: Fix the first element one by one
    for(int i = 0; i < nums.size(); i++){

        // Skip duplicate values of the fixed element
        // This avoids repeating the same triplet
        if(i > 0 && nums[i] == nums[i-1]) continue;

        // Left pointer starts just after the fixed element
        int l = i + 1;

        // Right pointer starts at the end of the array
        int r = nums.size() - 1;

        // Step 3: Two-pointer approach
        while(l < r){

            // Calculate sum of the triplet
            int sum = nums[i] + nums[l] + nums[r];

            // If sum is too large, move right pointer left
            if(sum > 0)  
                r--;

            // If sum is too small, move left pointer right
            else if(sum < 0) 
                l++;

            // If sum is exactly zero, we found a valid triplet
            else{
                ans.push_back({nums[i], nums[l], nums[r]});

                // Move both pointers after storing the result
                l++; 
                r--;

                // Skip duplicate values on the left pointer
                while(l < r && nums[l] == nums[l-1]) 
                    l++;

                // Skip duplicate values on the right pointer
                while(l < r && nums[r] == nums[r+1]) 
                    r--;
            }
        }
    }

    // Step 4: Print all unique triplets
    for(auto x : ans){
        cout << "[ ";
        for(int y : x){
            cout << y << " ";
        }
        cout << "]\n";
    }

    return 0;
}
