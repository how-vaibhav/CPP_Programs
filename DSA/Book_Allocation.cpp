#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <iterator>
using namespace std;

bool isvalied(vector<int> book, int students, int mid) {
    int student_no = 1;
    int page = 0;
    for (int i = 0; i < book.size(); i++) {
        if (book[i] > mid) return false; 

        if (page + book[i] <= mid) {
            page += book[i];
        } else {
            student_no++;
            page = book[i];
        }
    }
    return student_no <= students;
}

int main() {
    vector<int> book = {2, 1, 3, 4};
    int students = 4;

    if (students > book.size()) {
        cout << "Solution is not possible.";
        return -1;
    }

    auto st = *max_element(book.begin(), book.end()); // better start
    int end = accumulate(book.begin(), book.end(), 0);
    int ans = -1, mid;

    while (st <= end) {
        mid = st + (end - st) / 2;
        if (isvalied(book, students, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }

    cout << "Minimum possible maximum pages are " << ans;
    return 0;
}
