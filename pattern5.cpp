#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int spaces =n/2;
    int stars =1;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=spaces;j++){
            cout<<" ";
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";

        }
        cout<<endl;
        if(i<=n/2){
            spaces--;
            stars+=2;
        }
        else{
            spaces++;
            stars-=2;
        }
    }
}



// 5
//   *  
//  *** 
// *****
//  *** 
//   * 