// #include<iostream>
// using namespace std;

// int main(){
// //.....................sum & product 
// int arr[5];

// cout<<"Enter the 5 numbers :"<<endl;
// for(int i=0 ; i<5 ; i++){
//     cin>>arr[i];
// }

// int sum=0 , product=1 ;

// for(int i=0 ; i<5 ; i++){
//     sum += arr[i];
//     product *= arr[i];
// }

// cout<<"Sum ="<<sum<<"\nProduct ="<<product;
//     return 0;
// }



#include<iostream>
using namespace std;

int main(){
//....................................Unique values
int arr[] = {4, 5, 2, 4, 2, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique elements in the array are: ";
    
    for (int i = 0; i < n; i++) {
        bool isUnique = true;

        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;


return 0;
}
