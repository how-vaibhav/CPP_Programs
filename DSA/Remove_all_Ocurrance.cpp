#include<iostream>
#include<string>
using namespace std;

int main(){
    string st = "daabcbaabcbc";
    string path= "abc";

    int pos = st.find(path);  //It is the starting index in the string where the path is found. 

    while(st.length()>0 && st.length()>pos){
        st.erase(pos,path.length());
    }

  cout<<st;
  return 0;
}



