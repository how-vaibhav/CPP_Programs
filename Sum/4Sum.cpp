#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    // Input array containing duplicates and negative values
    vector<int> num = {-2, -1, -1, 1, 1, 2, 2};

    // This will store all unique quadruplets whose sum is 0
    vector<vector<int>> ans;

    int n = num.size();

    // Step 1: Sort the array
    // Sorting helps with:
    // 1) Two-pointer technique
    // 2) Skipping duplicate values easily
    sort(num.begin(), num.end());

    // Step 2: Fix the first element
    for(int i = 0; i < n; i++){

        // Skip duplicate values for the first fixed element
        if(i > 0 && num[i] == num[i-1]) 
            continue;

        // Step 3: Fix the second element
        for(int j = i + 1; j < n; j++){

            // Skip duplicate values for the second fixed element
            // IMPORTANT: j > i + 1 ensures comparison is within the same i
            if(j > i + 1 && num[j] == num[j-1]) 
                continue;

            // Left pointer starts after j
            int l = j + 1;

            // Right pointer starts at the end
            int r = n - 1;

            // Step 4: Two-pointer approach for remaining two numbers
            while(l < r){

                // Calculate sum of four elements
                int sum = num[i] + num[j] + num[l] + num[r];

                // If sum is too large, decrease it by moving right pointer left
                if(sum > 0)  
                    r--;

                // If sum is too small, increase it by moving left pointer right
                else if(sum < 0) 
                    l++;

                // If sum is exactly zero, we found a valid quadruplet
                else{
                    ans.push_back({num[i], num[j], num[l], num[r]});
                    l++; 
                    r--;

                    // Skip duplicate values for the left pointer
                    while(l < r && num[l] == num[l-1]) 
                        l++;

                    // Skip duplicate values for the right pointer
                    while(l < r && num[r] == num[r+1]) 
                        r--;
                }
            }
        }
    }

    // Step 5: Output all unique quadruplets
    for(auto x : ans){
        cout << "[ ";
        for(int y : x){
            cout << y << " ";
        }
        cout << "]\n";
    }

    return 0;
}
