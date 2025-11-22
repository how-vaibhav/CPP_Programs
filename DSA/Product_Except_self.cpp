// //....................Brute Force

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 4};
//     vector<int> result(vec.size(), 1);

//     for (int i = 0; i < vec.size(); i++) {
//         for (int j = 0; j < vec.size(); j++) {
//             if (i != j) {
//                 result[i] *= vec[j];
//             }
//         }
//     }

//     // Print result
//     for (int val : result) {
//         cout << val << " ";
//     }

//     return 0;
// }


//.............................Optimized Approach

#include<iostream>
#include <vector>
using namespace std;

int main(){
    //product except self

    vector<int> num={1,2,3,4,5};
    vector<int> ans(num.size(),1);

     for(int i=1 ; i<5 ; i++){
         ans[i]*=ans[i-1]*num[i-1];
        }
    
        //Suffix
      int suffix=1;  
     for(int i=num.size()-2 ; i>=0 ; i--){
      suffix *= num[i+1];
      ans[i] *= suffix;
     }   


     for(int i : ans){
        cout<<i<<" ";
     }
    return 0;
}
