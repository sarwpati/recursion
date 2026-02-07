// #include<iostream>
// using namespace std;
// void print(int arr[],int index, int n){
//     if(index==n){
//         return ;
//     }
//     print(arr,index+1,n);
//     cout<<arr[index]<<" ";

// }
// int main(){
//     int arr[]={3,4,1,2,8};
//     print(arr,0,5);
// }
// #include<iostream>
// using namespace std;
// void print(int arr[], int n){
//     if(n==-1){
//         return;
//     }
//     print(arr,n-1);
//     cout<<arr[n]<<" ";

// }
// int main(){
//     int arr[]={3,4,1,2,8};
//     print(arr,4);
// }

// #include<iostream>
// using namespace std;
// int print(int arr[], int n){
//     if(n==-1){
//         return 0;
//     }
//      return print(arr,n-1)+arr[n];
    

// }
// int main(){
//     int arr[]={3,4,1,2,8};
//     cout<<print(arr,4);
// }


#include<iostream>
using namespace std;

int minelement(int arr[], int index, int n)
{
    if(index == n-1)
        return arr[index];

    return min(arr[index], minelement(arr, index+1, n));
}

 int main(){
    int arr[]={3,4,1,2,8};
    cout<<minelement(arr,0,5);
}
