#include<iostream>
#include<cmath>
using namespace std;
int reverse(int n){
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
int countno(int n){
    int count = 0;
    while (n != 0) {
        n /= 10;
        ++count;
    }
    return count;
}
int main (){
    int n, t1 = 0, t2 = 1, nextTerm = 0, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    if(n==1){
        cout<<"1";
        return 0;
    }

    // cout << "Fibonacci Series: " << t1 << t2;

    for (int i = 1; i <=n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout<<nextTerm<<endl;
        sum = sum * pow(10,countno(nextTerm)) + nextTerm;}
    cout<<sum;

    int count=0,num=0;
    while (reverse(sum)!= 0) {
        num=sum%10;
        count++;
        sum /= 10;
        if(count==n){
            cout<<num;
            return 0;
        }
    }
    
    
    return 0;
}