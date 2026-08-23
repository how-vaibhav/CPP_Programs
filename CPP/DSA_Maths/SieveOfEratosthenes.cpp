#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num = 17;
    vector<bool> isprime(num + 1, true);

    isprime[0] = isprime[1] = false;

    for (int i = 2; i * i <= num; i++) {
        if (isprime[i]) {
            for (int j = i * i; j <= num; j += i) {
                isprime[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 2; i <= num; i++) {
        if (isprime[i]) count++;
    }

    cout << "Prime Numbers in range are : " << count;
    return 0;
}
