#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main(){
    int row = 2;
    int col = 2;
    int key=99;
    vector<vector<int>> mat(row ,vector<int>(col));

    cout<<"Enter the Matrix:\n";
     for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<mat[i].size() ; j++){
                cin>>mat[i][j];
        }
    }
     int i=0;
    while(i!=row){
        int x=mat[i][0] , y=mat[i][col-1];
        if(x<key && y>key){
            break;
        }
    }

    while(){
        int start = 
    }
}