//..........................................Brute Force
// #include<iostream>
// #include<vector>
// #include<limits>
// using namespace std;

// int main(){
// vector<int> beam={1,8,6,2,5,4,8,3,7};
// int maxArea ,wh ,ht ,area;

// for(int i=0 ; i<beam.size(); i++){
//     for(int j=i+1 ; j<beam.size() ; j++){
//         wh = j-i;
//         ht = min(beam[i],beam[j]);
//         area =wh*ht; 
//         maxArea=max(maxArea,area);
//     }
// }
// cout<<maxArea;
// return 0;

// }


//......................................Two pointer Approach
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> beam = {1,8,6,2,5,4,8,3,7};
    int left = 0, right = beam.size() - 1;
    int maxArea = 0;

    while (left < right) {
        int ht = min(beam[left], beam[right]);
        int wt = right - left;
        int area = ht * wt;

        maxArea = max(maxArea, area);

        // Move the pointer pointing to the shorter line
        if (beam[left] < beam[right])
            left++;
        else
            right--;
    }

    cout << "Maximum Area: " << maxArea << endl;
    return 0;
}
