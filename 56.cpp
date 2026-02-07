// #include<iostream>
// using namespace std;
// bool checkpal(string aaa,int start,int end){
//     if(start>=end) return 1;
//     if(aaa[start]!=aaa[end]){
//         return 0;
      
//     }
//     return checkpal(aaa,start+1,end-1);
// }



// int main(){
//     string aaa="naman";
//     cout<<checkpal(aaa,0,4);
// }

// #include<iostream>
// using namespace std;
// void checkpal(string aaa,int end){
//     if( end==-1){
//         return;
//     }
//     cout<<aaa[end];
//     return checkpal(aaa,end-1);
// }
  



// int main(){
//     string aaa="sarwp";
//     checkpal(aaa,4);
// }


#include<iostream>
using namespace std;
void checkpal(string aaa,int end){
    if( end==-1){
        return;
    }
    return checkpal(aaa,end-1);
    cout<<aaa[end]-"a"+"A";
}
  



int main(){
    string aaa="sarwp";
    checkpal(aaa,4);
}