// #include <iostream>
// using namespace std;
// void num(int n){
//     if(n==1){
//         cout<<"Happy birthday";
//         return;
//     }
//     cout<<n<<"days left for the birthday"<<"\n";
//      num(n-1);
// }
// int main(){  
// int n;
// cout<<"enter the no of days: ";
// cin>>n;
// num(n);
// }

#include <iostream>
using namespace std;
int num(int n){
    if(n==1){
        cout<<n;
        return n;
    }
    cout<<n<<"\n";
     num(n-1);
}
int main(){  
int n;
cout<<"enter the no of days: ";
cin>>n;
num(n);
}