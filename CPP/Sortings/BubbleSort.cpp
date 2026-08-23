#include<iostream>
using namespace std;
void bubble(int arr[] , int n){
    int temp;
    for(int i=0 ; i<n-1 ; i++){
        for(int j =0 ; j<n-1-i ; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble(arr , n);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}