#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// permutation check
int main() {
    string s1 = "ab";
    string s2 = "eibaoooo";

    int freq[26] = {0};

    // frequency array of s1
    for (char c : s1)
        freq[c - 'a']++;

    int windSize = s1.length();

    for (int i = 0; i <= s2.length() - windSize; i++) {
        int wind[26] = {0};

        for (int j = 0; j < windSize; j++) {
            wind[s2[i + j] - 'a']++;
        }

        if (equal(freq, freq + 26, wind)) {
            cout << "Yes permutation exists";
            return 0;
        }
    }

    cout << "No permutation exists";
    return 0;
}
