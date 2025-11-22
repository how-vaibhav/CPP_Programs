#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a={2,1,0,0,1,2,1,0,2,0,0};
    int l=0 ,m=0 ,h=a.size()-1;

    while(m<=h){
        if(a[m]==0){
            swap(a[m],a[l]);
                l++,m++;
        }

        if(a[m]==1){
            m++;
        }
        if(a[m]==2){
            swap(a[m],a[h]);
            h--;
        }
    }
    for(int i : a){
        cout<<i<<" ";
    }
    return 0;
}