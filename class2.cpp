// #include<iostream>
// using namespace std;
// int main ()
// {
//     cout<<"hello world ";
//     return 0;
// }
// print your name 
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"saurabh\npandey \n";
//     return 0;
// }

// sum of two number 
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter the both number \n";
//     cin>>a;
//     cout<<"enter the both number \n";
//     cin>>b;
//     cout<<"the sum of two number is : "<<(a+b);
//     return 0;
// }
// /upprecase or lowercase
// #include<iostream>
// using namespace std;
// int main(){
//     char alpha;
//     cout<<"enter alphabet :";
//     cin>>alpha;
//     if ('a'<=alpha && 'z'>=alpha){
//         cout<<" alphabet is in lowercase ";
//     }
//     else{
//         cout<<"alphabet is in uppercase";
//     }
//     return 0;
// }



// print numer 1 to 5
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//     cout<<i<<"\n";}
//     return 0;
// }

// sum of numer from 1 to n
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"the n number is ";
//     cin>>n;
//      int sum=0 ;
//     for(int i =1;i<=n;i++){
     
//      sum=sum+i;
     
       

//     }
//     cout<<sum<<'\n';
//     return 0;

// }

// sum of all odd number from 1 to n 
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter the no.";
//     cin>>n;
//     int s=0;
//     for (int i=1;i<=n;i++){
//         if(i%2!=0){

//      s=s+i;   }
//      else{
//         }

//     }
//     cout<<s;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         cout<<"*****"<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char n='F';
//     for(int i='A';i<=n;i++){
//         // cout<<endl;
//         for (int j='A';j<=n;j++){
//         // cout<<endl;
//        cout <<char(j);}cout<<endl;
//     }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     char n='D';
//     char num='A';
//     for(int i='A';i<=n;i++){
        
//         for(int j='A';j<=n;j++){
//         // for (int k=j;k<=n;k++)
        
//         cout<<num;
//         num++;}
//         cout<<endl;
//     // }
    
    
    
// } 
// }
// star formation
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
    
//     for(int i=0;i<=n;i++){
//         for(int j=1;j<=i+1;j++){
//             cout<<'*';
//             // st++;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=4;
//     char c='A';
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//            cout<<c; 
//         }
//         c++;
//         cout<<endl;
//     }
// } // namespace name


// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>0;j--){
//         cout<<j;
//         }cout<<endl;
        
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     int sum=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<sum;
//             sum++;
            
            

//         }cout<<endl;
//     }
// }

// 

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//          cout<<' ';   
//         }
//         for(int j=1;j<=n-i;j++){
            
//         cout<<i+1;}
    
//     cout<<endl;
// }
// }

//          1
//        1 2 1
//      1 2 3 2 1
//    1 2 3 4 3 2 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//      for(int i=1;i<=n;i++){           // this three line code is              
//         for(int j=1;j<=n-i;j++){      // for (----)(223 -225)
//             cout<<' ';}
//             for(int j=1;j<=i;j++){    //this is for 
//                     cout<<j;           //first pyramid no.
                

//             }for(int j=i-1;j>0;j--){   //this is for second
//                 cout<<j;               //and revers pyramid
//             }
            
//            cout<<endl;}
//     }

// hollow diamond pattern
//    *
//   * *  
//  *   *   
// *     * 
//  *   *
//   * *
//    *
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<' ';
//         }cout<<'*';
//         if(i!=0){
//             for(int j=1;j<=2*i-1;j++){
//                 cout<<" ";
//             }cout<<"*";
//         }cout<<endl;
//     }

//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<' ';
//         }cout<<'*';
//         if(i!=n-2){
//             for(int j=0;j<2*(n-i)-5;j++){
//                 cout<<" ";
//              }  cout<<"*";
//         }cout<<endl;
//     }
    
//     }//hello demo


// #include <iostream>
// using namespace std;
// int main(){
//     int n =4;
    
//     for(int i=1;i<=n;i++){
//         char s=65;
//         for(int j=1;j<=n;j++){
//             cout<<s;
            
           
//             s=s+1;
//         }
        
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
// int n= 3;
// int s=1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<s;
//         s++;
        

//     }cout<<endl;
// }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";

//         }cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
// cout<<"hello world";
// }







// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"gaurav"; //isse print hota hai naam
// }




// #include<iostream>
// using namespace std;
// int main(){
//  cout<<"hello sannu bhai";
// }







// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     int l=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<l;
//            l++; 
//         }cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=i-1;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=n-i;k++){
//           cout<<i+1;  
//         }
//         // cout<<i;
//         cout<<endl;}
//     }
#include<iostream>
using namespace std;
int main(){
    int n=;
    int b =n/10;
    int c=b;
    cout<<c;
}