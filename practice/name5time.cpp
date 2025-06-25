#include<iostream>
using namespace std;
void call(int n){
    if(n==0){
        return;
    }
    call(n-1);
    cout<<"name"<<" ";
}
int main(){
    int n=5;
    // cin>>n;
    call(n);
    return 0;
}