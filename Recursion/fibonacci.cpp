#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0||n==1){
        return n;
    }

    int f1 = fibonacci(n - 1);
    int f2 = fibonacci(n - 2);
    return f1 + f2;
} 
int main(){

    // 0,1,1,2,3,4,8,13,..

    int n;
    cin >> n;
    cout<<fibonacci(n)<<endl; 

    return 0;
}