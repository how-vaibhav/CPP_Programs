#include<iostream>
#include<vector>
using namespace std;

//..................using Brute Force
// vector<int> pairSum( vector<int> vec ,int target){
//    int n=vec.size();
//    for(int i=0 ; i<n ; i++){
//       for(int j=i+1 ; j<n ; j++){
//          if(vec[i]+vec[j]==target){
//           cout<<vec[i]<<","<<vec[j]<<" is pair sum .";              
//          }
//       }
//    }
// }


int main(){
   vector<int> vec ={1,4,2,6,9,4,2,1,0,11,14,15};         //.......we know it is assendingly sorted vector
   int target=21; 

  // pairSum(vec , target);......this is function call for brute force
  
   int n = vec.size();
   int i=0 , j=n-1 , sum=0;               //........Optimized Way
   while(sum != target){
      sum=vec[i]+vec[j];
      if(sum>target){
         j--;
      }
      else if(sum<target){
         i++;
      }
      else{
         cout<<vec[i]<<","<<vec[j]<<" is the pair.";
      }
   }

    return 0;
}