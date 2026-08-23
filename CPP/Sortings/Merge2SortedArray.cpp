// #include <iostream>
// #include <vector>
// using namespace std;

// void Merge(vector<int> &num1, vector<int> &num2, int m, int n) {
//     vector<int> ans;
//     int i = 0, j = 0;

//     while (i < m && j < n) {
//         if (num1[i] < num2[j])
//             ans.push_back(num1[i++]);
//         else
//             ans.push_back(num2[j++]);
//     }

//     while (i < m)
//         ans.push_back(num1[i++]);

//     while (j < n)
//         ans.push_back(num2[j++]);

//     for (int x : ans)
//         cout << x << " ";
// }

// int main() {
//     vector<int> num1 = {1, 2, 3, 0, 0, 0};
//     vector<int> num2 = {2, 5, 6};

//     int m = 3; // valid elements in num1
//     int n = 3; // elements in num2

//     Merge(num1, num2, m, n);
// }


#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &num1, int m, vector<int> &num2, int n) {
    int i = m - 1;        // last valid element in num1
    int j = n - 1;        // last element in num2
    int k = m + n - 1;    // last position in num1

    while (i >= 0 && j >= 0) {
        if (num1[i] > num2[j])
            num1[k--] = num1[i--];
        else
            num1[k--] = num2[j--];
    }

    while (j >= 0) {
        num1[k--] = num2[j--];
    }
}

int main() {
    vector<int> num1 = {1, 2, 3, 0, 0, 0};
    vector<int> num2 = {2, 5, 6};

    int m = 3;  // valid elements in num1
    int n = 3;  // valid elements in num2

    Merge(num1, m, num2, n);

    for (int x : num1)
        cout << x << " ";
}
