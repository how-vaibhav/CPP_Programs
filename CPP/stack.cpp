#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> s;
    int top =-1;
    int size =5;
void push(int val ){
   if(top<=size){
    top++;
    s[top] = val;
  }else cout<<"stack is full mere bhai!!";
}
void pop(){
    if (top>-1)top--;
    else cout<<"stack is empty mere bhai" ;    
  }
void display(){
    if (top<-1) cout<<"stack is empty mere bhai ";
    else 
} 
};


int main(){
Stack obj1;

}
