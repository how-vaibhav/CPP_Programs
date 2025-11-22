#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num = {1, 5, 3, 7, 2, 10, 3, 11};

    for (int i = 0; i < num.size() ; i++) {
        for (int j = 0; j < num.size() - i - 1; j++) {
            if (num[j] < num[j + 1]) { // for descending order
                swap(num[j], num[j + 1]);
            }
        }
    }

    for (int i : num) {
        cout << i << " ";
    }
    return 0;
}
