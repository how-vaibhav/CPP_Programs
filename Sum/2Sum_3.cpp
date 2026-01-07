#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 11, 7, 15};
    vector<int> ans;
    int target = 9;
    unordered_map<int, int> m;

    for (int i = 0; i < arr.size(); i++) {
        int first = arr[i];
        int sec = target - first;

        if (m.find(sec) != m.end()) {  //checks whether the required complement of the current element has already appeared in the array, enabling constant-time detection of a valid pair.
            ans.push_back(sec);
            ans.push_back(first);
            break;
        }
        m[first] = i;
    }

    for (int x : ans) {
        cout << x << " -> ";
    }
    return 0;
}
