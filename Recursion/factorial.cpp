#include<iostream>
using namespace std;

int fact(int number){
    // base case
    if(number==0){
        return 1;
    }

    return number * fact(number - 1);
}
int main(){
    int n;
    cin >> n;
    cout << "Factorial of n is " << fact(n);
    return 0;
}