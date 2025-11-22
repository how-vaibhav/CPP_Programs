#include<iostream>
#include<cctype> // for isalnum(), tolower()
using namespace std;

int main(){
    string name = "a$bcdc*ba";
    int l = 0, h = name.size() - 1;
    bool ispal = true;

    while(l < h){
        if(!isalnum(name[l])) { l++; continue; }
        if(!isalnum(name[h])) { h--; continue; }

        if(tolower(name[l]) != tolower(name[h])){
            ispal = false;
            break;
        }
        l++;
        h--;
    }

    cout << (ispal ? "Yes" : "No");
    return 0;
}
