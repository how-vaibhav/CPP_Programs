// #include <iostream>
// using namespace std;

// int main() {
//     int num = 32;
//     int let = 1;
//     bool isPowerOf2 = false;

//     while (let <= num) {
//         if (num == let) {
//             isPowerOf2 = true;
//             break;
//         }
//         let *= 2;
//     }

//     if (isPowerOf2)
//         cout << "It is a power of 2." << endl;
//     else
//         cout << "It is NOT a power of 2." << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    //.............................Bitwise Trick
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num > 0 && (num & (num - 1)) == 0)
        cout << num << " is a power of 2." << endl;
    else
        cout << num << " is NOT a power of 2." << endl;

    return 0;
}
