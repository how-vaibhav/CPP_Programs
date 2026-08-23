#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main(){
    int key = 21;
    int row=3;
    int col=2;
    vector<vector <int>> matrix(row,vector <int>(col)) ;
    //Input
    cout<<"Enter the matrix: \n";
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<matrix[i].size() ; j++){
                cin>>matrix[i][j];
        }
    }

    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<matrix[i].size() ; j++){
                if(key == matrix[i][j]){
                    pair<int ,int> pos ={i,j};
                    cout<<"Found at : "<< pos.first<<","<<pos.second<<endl;
                }
        }
    }

    return 0;
}
