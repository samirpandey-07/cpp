#include<iostream>
using namespace std;
int main (){
    int n, t1 = 0, t2 = 1, nextTerm = 0, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    if(n==1){
        cout<<"1";
        return 0;
    }

    // cout << "Fibonacci Series: " << t1 << t2;

    for (int i = 1; i < n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        sum+=nextTerm;
    }
    cout<<sum+1;
    return 0;
}