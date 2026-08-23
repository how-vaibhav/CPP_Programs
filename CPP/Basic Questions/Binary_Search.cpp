// #include<iostream>
// #include<vector>
// using namespace std;

// int rec(vector<int> num ,int start ,int end ,int target){
// while(start<=end){
//       int  mid =start+(end-start)/2;
//         if(target<num[mid]){
//             end=mid-1;
//         }
//         else if(target>num[mid]){
//             start=mid+1;
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1;
        

// }

// int main(){
//    vector<int> num = {1,2,3,4,5,6,7,8};
//    int target=1;
//    cout<<rec(num,0,num.size()-1,target);
//   return 0;
// }





//........................Recursive Binary search

// #include<iostream>
// #include<vector>
// using namespace std;

// int rec(vector<int> num ,int start ,int end ,int target){
// if(start>end){ return -1;}

// int mid=start + (end-start)/2;

//   if (target == num[mid])
//         return mid;
//     else if (target < num[mid])
//         return rec(num, start, mid - 1, target);
//     else
//         return rec(num, mid + 1, end, target);
// }
        



// int main(){
//    vector<int> num = {1,2,3,4,5,6,7,8};
//    int target;
//    cout<<"Enter the target :"<<endl;
//    cin>>target;
//    cout<<"Index = "<<rec(num,0,num.size()-1,target);
//   return 0;
// }



//.......................................Rotated Sorted

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> num={7,8,9,10,1,2,3,4,5,6};
    int target=1,st=0 ,end=num.size()-1;

    while(st<=end){

     int mid=st+(end-st)/2;
     
     if(target==num[mid])
      cout<<mid;

     if(num[mid]>=num[st]){//.......left sorted
              
               if(target<=num[mid] && target>=num[st])
               end=mid-1;
               else
               st=mid+1;
               

        }else{//.....right sorted
                 
               if(target<=num[end] && target>=num[mid])
               st=mid+1;
               else
               end=mid-1;
            }
      }
return -1;
}