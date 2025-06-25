#include<iostream>
#include<cmath>
using namespace std;
int checkprime(int n){
    int i;
    if (n<=1){
        return 1;
    }
    for( i=2;i*i<=n;i++){
        if(n%i==0){
            return 1;
        }
        
    }
    return i;
}
long long primeProduct(long long L, long long R){
    // code here
    int mul=1;
    for(int i=L;i<=R;i++){
        mul=(mul*checkprime(i));
        cout<<mul<<endl;
    }
    return mul;
}
int main (){
    int l,r;
    cin >> l>>r;
    // cout<<primeProduct(l,r);
    // int mul=1;
    for(int i=l;i<=r;i++){  
        cout<<checkprime(i)<<endl;
        // mul=(mul*checkprime(i));
        // cout<<mul<<endl;
    }
    return 0;
}