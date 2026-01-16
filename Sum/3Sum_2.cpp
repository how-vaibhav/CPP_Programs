#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    set<vector<int>> ans;

    for (int i = 0; i < nums.size(); i++) {
        unordered_map<int, int> u;   // reset for each i
        int target = -nums[i];

        for (int j = i + 1; j < nums.size(); j++) {
            int toFind = target - nums[j];

            if (u.find(toFind) != u.end()) {
                vector<int> triplet = {nums[i], nums[j], toFind};
                sort(triplet.begin(), triplet.end());
                ans.insert(triplet);
            }

            u[nums[j]]++;   // store visited number
        }
    }

    // OUTPUT
    for (auto &i : ans) {
        cout << "[ ";
        for (int x : i) cout << x << " ";
        cout << "]\n";
    }
}
