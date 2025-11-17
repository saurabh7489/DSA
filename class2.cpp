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
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the no.";
    cin>>n;
    int s=0;
    for (int i=1;i<=n;i++){
        if(i%2!=0){

     s=s+i;   }
     else{
        }

    }
    cout<<s;
    return 0;
}