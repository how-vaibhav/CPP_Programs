//Reverse of string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string a="hello papa !";
    reverse(a.begin() ,a.end());
    for(char i: a){
        cout<<i;
    }
    

    cout<<endl;
    string b="heloo my dear";
    string temp;
    
    for(int i=0 ; i<b.length()/2 ; i++){
        temp[i]=b[i];
        b[i]=b[b.length() - i -1];
        b[b.length() - i -1]= temp[i];
    }
 for(char i: b){
        cout<<i;
    }
    return 0;}