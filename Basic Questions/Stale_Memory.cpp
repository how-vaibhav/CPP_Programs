#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec ={1,3,2,3,4};
    cout<<vec[4];
    vec.pop_back();
    cout<<vec[4];
    return 0;
}



// That memory still contains the old value 4 because:
// pop_back() doesn’t erase or zero out the memory — it just reduces the size counter.
// So you’re reading stale memory (dangling element).