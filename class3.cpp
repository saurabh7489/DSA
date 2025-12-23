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

// #include<iostream>
// using namespace std;
// int digi(int n){
//     int sum=0;
//     while(n>0){
//         int s=n%10;
//         n=n/10;
//         sum=sum+s;
//         // return sum;

//     }
//     return sum;
// }
// int main(){
//   cout<<  digi(2356);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int fact(int n,int r){
//     int mult=1;
//     int mult1=1;
//     int mult2=1;
//     for(int i=n;i>0;i--){
//         mult=mult*i;


//     }
//     for(int j=r;j>0;j--){
//         mult1=mult1*j;
//     }
//     int a=n-r;
//     for(int k=a;k>0;k--){
//         mult2=mult2*k;

//     }
//   int mult3= mult1*mult2;
//   cout<<mult/mult3;
// }
// int main(){
//     fact(12,3);
//     return 0;
// }

#include<iostream>
using namespace std;
int bin(int n){
    int ans=0; int pow=1;
    while(n>0){
       
        // int ans=0;
     int re=n%2;
    n=n/2;
    ans=ans+(re*pow);
    // int ans=0;
    // ans=ans+pa;
   pow= pow*10;
}return ans;

}
int main(){
   cout<< bin(10);

}