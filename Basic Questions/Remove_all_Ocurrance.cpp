
#include <iostream>
using namespace std;
int main(){
    string st = "daabcbaabcbc";
    string path= "abc";

    int pos = st.find(path);    //It is the starting index in the string where the path is found. 

    while(st.length()>path.length() && pos <st.length()  ){
        st.erase(pos , path.length());
        pos = st.find(path);    // to reevaluate the value of position in every iteration
    }
    cout<<st;
}