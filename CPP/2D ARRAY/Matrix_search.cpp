#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector <int>> v ={{1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12}};
    int row = 0;
    int col =v[0].size()-1;
    int target = 6;
    while(row < v.size() && col >= 0){
    int current = v[row][col];

        if(target == current) {
            cout<<"Found at : "<<row+1<<"," <<col+1<<endl;
            return 0;
        }
        if(current >target) col--;
        else row++; 
    }
cout<<"NOT FOUND !!"<<endl;
return 0;
}