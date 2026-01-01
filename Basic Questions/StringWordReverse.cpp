#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "hello papa how are you!";

    // 1️⃣ Reverse whole string
    reverse(s.begin(), s.end());
    cout << s << endl;

    // 2️⃣ Reverse each word
    int start = 0;
    for (int end = 0; end <= s.length(); end++) {
        if (end == s.length() || s[end] == ' ') {
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
        }
    }

    cout << s;
}


//remove the white space also