// #include<iostream>
// using namespace std;



// int num(int n, int N){
//     if(n==N){
//         cout<<n;
//         return n;
//     }
//     cout<<n<<"\n";
//     return num(int (n+1),  N);

// }
 

// int main(){
//     int n;
//     cout<<"Enter the no: ";
//     cin>>n;
//     num(1,n);
// }



// #include<iostream>
// using namespace std;



// void num(int n){
//     if(n==1){
//         cout<<n;
//         return ;
//     }
//     num(n-1);
//     cout<<n;

// }
 

// int main(){
//     int n;
//     cout<<"Enter the no: ";
//     cin>>n;
//     num(n);
// }



// #include<iostream>
// using namespace std;



// void num(int a,int b){
//     if(a>b){
//         return ;
//     }
//     cout<<a<<"\n";
//     return num(a+2,b);

// }
 

// int main(){
//     int n;
//     cout<<"Enter the no: ";
//     cin>>n;
//     num(2,n);
// }


#include<iostream>
using namespace std;



void num(int n){
    if(n<=2){
        cout<<n;
        return;
    }
    num(n-2);
    cout<<n<<"\n";
    
}
 

int main(){
    int n;
    cout<<"Enter the no: ";
    cin>>n;
    num(n);
}

