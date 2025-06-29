#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        
   
    int a,b,c,d,cmp;
    cin>>a>>b>>c;
    cmp=b-a;
    c=c-cmp;
    a=a+cmp;
    // cout<<a<<b<<c<<" ";
    if(cmp>b){
        cout<< "NO"<<endl;
        continue;
    }
    if(c<b){
        cout<< "NO"<<endl;
        continue;
    }
    if((c-b)%3==0){
       cout<< "YES"<<endl;
       
    }
  
    else{
       cout<< "NO"<<endl;
    }
 
 }
    
}
