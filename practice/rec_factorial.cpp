#include<iostream>
using namespace std;
int call(int n){
    if(n==1||n==0){
        return 1;
    }
    int fact=n*call(n-1);
    return fact;
}
int main(){
    int n;
    cin>>n;
    int p=call(n);
    cout<<p;
}