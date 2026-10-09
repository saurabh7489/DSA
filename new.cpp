// #include<iostream>
// using namespace std;

// void travesal(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
// }

// int main(){
// int arr[100]={1,2,3,4,5};
// travesal(arr, 5);
//     return 0;
// }


//  insertion 


// #include<iostream>
// using namespace std;

// int insertion(int arr[],int size ,int index, int element ,int capacity){

// if(size>=capacity){
//     return -1;
// }

//     for(int i=size-1;i>=index;i--){
// arr[i+1]=arr[i];

//     }
//     arr[index] = element;
//     return 0;
// }


// int main(){
//     int element=4  ;
// int arr[100]={1,2,3,5,6};
// int size=5;

// cout<< insertion( arr,size ,3 ,element,100)<<endl;
// for (int i = 0; i < size + 1; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;

// }


// #include<iostream>
// using namespace std;
// int main(){
// int arr[100]={1,2,3,5,6};
// int capacity = 100;
// int size=5,index=3;
// int element = 4;

// if(size>=capacity){
//     cout<<"invalid";
//     return -1;
// }

// for(int i=size;i>=index;i--){
//     arr[i+1]=arr[i];
// }
// arr[index]=element;
// size=size+1;

// for(int i=0;i<size;i++){
//     cout<<arr[i]<<endl;
// }


//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
int arr[100]={1,2,5,4};
int index=2;
int element = 3;
int size=4;
int capacity=100;

while(size<capacity){
    arr[size+1]=arr[index];
    arr[index]=element;
    size=size+1;
    for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}
    return 0;
}


    return 0;
} // namespace std;

