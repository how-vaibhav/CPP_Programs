// //.....................................Broute Force Approach 
// #include<iostream>
// #include<vector>
// using namespace std;


// int main(){

//   vector<int> marks={1,2,1,2,1,9,9,9,9,9,9,9,9};
//   int n = marks.size();
//   int floor = n/2;

//   for(int val : marks){
//     int freq=0;
//       for(int el : marks){
//           if(val == el){
//               freq++;  
//           }
//       }
//           if(freq>floor){
//               cout<<val<<" is majority in occurance.";
//                 return 0;
//           }
//    }
//    return 0;
// }





//..................................................Optimized 
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> num = {9, 8, 9, 2, 1, 9,1,1,1,1,1,1,1,1,1,1};
//     int n = num.size();
//     int floor = n / 2;

//     sort(num.begin(), num.end()); // sorting in ascending order

//     int freq = 1;

//     for (int i = 1; i < n; i++) {
//         if (num[i] == num[i - 1]) {
//             freq++;
//         } else {
//             freq = 1; // reset frequency
//         }

//         if (freq > floor) {
//             cout << "Majority element: " << num[i] << endl;
//             return 0;
//         }
//     }

//     cout << "No majority element found." << endl;
//     return 0;
// }



//.............................................Moore's Theoram

#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> num = {1,2,1,3,1};
int n = num.size();
int freq=0 , ans=0;

for(int i=0 ; i<n ; i++){
    if(freq==0){
      ans=num[i];
    }
    if(ans==num[i]){
      freq++;
    }
    else{
      freq--;
    }
}

//checking if really a majority element exist or not
int count=0;
for(int val : num){
  if(val==ans){
    count++;}
  }

  if(count > n/2){
    cout<<"Majority :"<<ans;
  }
  else{
    cout<<"Majority element do not exist.";
  }

  return 0;
}