#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string name = "vaibhav";
    char temp;

    for (int i = 0; i < name.length() / 2; i++) {
        temp = name[i];
        name[i] = name[name.length() - i - 1];
        name[name.length() - i - 1] = temp;
    }

    for (char i : name) {
        cout << i << " ";
    }
    cout<<endl;

    string name2="china";
    reverse(name2.begin(),name2.end());
    for(char i:name2)
    cout<<i;

}
