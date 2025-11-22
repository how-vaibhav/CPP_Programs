#include<iostream>
#include <climits>

using namespace std;

int main(){


//...................................TO Print all the sub-array
//int arr[5]={1,2,3,4,5};
// for(int str=0 ; str<5 ; str++){
//     for(int end = str ; end<5 ; end++){
//         for(int i=str ; i<=end ; i++){
//                cout<<arr[i];
//         }
//         cout<<" ";
//     }
//     cout<<endl;
// }


//..........................................By Brout Force
// int n=5;
// int arr[5]={1,2,3,4,5};
// int maxSum = INT_MIN;

// for(int st=0 ; st<n ; st++){
//     int currSum = 0;
//       for(int end=st ; end<n ; end++){
//             currSum += arr[end];
//             maxSum = max(currSum,maxSum);
//     }
// }
// cout<<"max sub-array = "<<maxSum;

//.........................................Kadame's Algorithms

int n=7;
int arr[7]={3,-4,5,4,-1,7,-8};
int maxSum = INT_MIN;
int currSum = 0;

        for(int i=0 ; i< n ; i++){
            currSum += arr[i];
            maxSum=max(currSum,maxSum);
            if(currSum<0){
                currSum=0;
            }
               }
               
         cout<<maxSum;


    return 0;
}