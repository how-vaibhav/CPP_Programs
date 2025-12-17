#include<iostream>
#include<string>
using namespace std;
// we have use the diffrent string to implement the logic 
// int main(){
//     string s="aaabbbccddd";
//     string ans="";
//     int count=1;
//     char curr=s[0];

//     for(int i=1 ; i<s.length() ; i++){
//             if(s[i]==curr){ count++;}
//             else{
//                 ans += curr;
//                 ans += to_string(count);
//                 count=1;
//                 curr=s[i];
//             }
//     }
//       // add last character group
//     ans += curr;
//     ans += to_string(count);
//     cout<<"Compresed form is: "<<ans<<endl;
//     return 0;
// }

//now we will try to save in the same string only 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "aaabbbccddd";

    int count = 1;
    char curr = s[0];
    int ansIdx = -1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == curr) {
            count++;
        } else {
            s[++ansIdx] = curr;

            string cnt = to_string(count);
            for (char c : cnt)
                s[++ansIdx] = c;

            curr = s[i];
            count = 1;
        }
    }

    // handle last group
    s[++ansIdx] = curr;
    string cnt = to_string(count);
    for (char c : cnt)
        s[++ansIdx] = c;

    // resize string to compressed length
    s.resize(ansIdx + 1);

    cout << "Compressed form is: " << s << endl;
    return 0;
}
