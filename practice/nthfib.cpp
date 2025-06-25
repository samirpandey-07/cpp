#include<iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    if(n==1){
        cout<<"1";
        return 0;
    }
    int arr[n],i=2,rem;
      arr[0]=0;
      arr[1]=1;
      if(n==1){
          return arr[1];
      }
        for( i=2;i<=n;i++){
            arr[i]=arr[i-1]+arr[i-2];
            rem=rem*10+arr[i];
            
            
            }
            cout<<rem+1;
            return 0;
}