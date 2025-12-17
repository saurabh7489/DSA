// function
// #include<iostream>
// using namespace std;

// int min(int a,int b){
//     int s=a-b;
//     cout<<s;
// }
// int main(){
//     min(4,2);

// }
// #include<iostream>
// using namespace std;
// int min(int a,int b){
//     if(a>b){
//         cout<<"b is minimun";}
//         else{
//             cout<<"a is minimum";}
//         }
//     int main(){
//         min(2,3);
//     }
    
// #include<iostream>
// using namespace std;
// int sum(int n){
//     int s=0;
//   for(int i=1;i<=n;i++){
//     // int s=0;
//     s=i+s;
  
  
//     }  cout<<s;
// }

//   int main(){
//     sum(4);
//   }
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int mul=1;
//     for(int i=1;i<=n;i++){
//         mul=i*mul;
        
//     }
//     cout<< mul;
// }
// int main(){
//     fact(4);
// }

// #include<iostream>
// using namespace std;
// int digi(int n){
//     int s=n%10;
//   n=  n/10;
//   int j=s+n;
//   return j;
// }
// int main(){
//     digi(123);
// }

#include<iostream>
using namespace std;
int digi(int n){
    int sum=0;
    while(n>0){
        int s=n%10;
        n=n/10;
        sum=sum+s;
        return sum;

    }
}
int main(){
    digi(125);
}