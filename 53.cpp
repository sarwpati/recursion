
// #include<iostream>
// using namespace std;



// int num(int n){
//     if(n==1){
//         return n;
//     }
//      return n * num(n - 1);

    
// }
 

// int main(){
//     int n;
//     cout<<"Enter the no: ";
//     cin>>n;
//     cout<< num(n);
// }




// #include<iostream>
// using namespace std;



// int num(int n){
//     if(n==1){
//         return n;
//     }
//      return n + num(n - 1);

    
// }
 

// int main(){
//     int n;
//     cout<<"Enter the no: ";
//     cin>>n;
//     cout<< num(n);
// }


#include<iostream>
using namespace std;



int num(int n,int m){
    if(m==0){
        return 1;
    }
    return n*num(n,m-1);
   

    
}
 

int main(){
    int n;
    cout<<"Enter the no: ";
    cin>>n;
    cout<< num(2,n);
}