#include<iostream>
using namespace std;

class Vector{
public:    
    int size=0;
    int capacity=1;
    int* arr=new int[capacity];   //Dynamic array
    void add(int a){
        if(size==capacity){
            capacity *= 2;
            int *arr2 = new int[capacity];
                for(int i=0 ; i<capacity ; i++){
                    arr2[i]=arr[i];
                }
                arr=arr2;
        }
        arr[size++]=a;
    }

    void show(){
        for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<"\t";
        }
        cout<<endl;
    }

    void check(){
        cout<<"size :"<<size<<"\t"
            <<"Capacity :"<<capacity<<endl<<endl;
    }
    
    
};

int main(){
    Vector v;
    v.add(10);  v.check();  v.show(); 
    v.add(20);  v.check();  v.show(); 
    v.add(30);  v.check();  v.show();
    v.add(10);  v.check();  v.show(); 
    v.add(20);  v.check();  v.show(); 
    v.add(30);  v.check();  v.show();
   
    return 0;
}