#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,c,n,i=1;
    cin>>n>>a>>b>>c;
    int sum=a+b+c;
    while(sum*i<n){
         i++;
    }
    
    if((i-1)*sum+a==n||(i-1)*sum+a>n){
        cout<<(i-1)*sum+1<<endl;
    }
    else a+=b;
    if((i-1)*sum+a==n||(i-1)*sum+a>n){
        cout<<(i-1)*sum+2<<endl;
    }
    else a+=c;
    if((i-1)*sum+a==n||(i-1)*sum+a>n){
        cout<<(i-1)*sum+3<<endl;
    }
}
    
}