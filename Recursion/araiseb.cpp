#include<iostream>
using namespace std;

int power (int a , int b){
    if(b==0){
        return 1;
    }
    return a * power(a, b - 1);
}
int fastPower(int a, int b){
    if(b==0){
        return 1;
    }
    int halfpower = fastPower(a, b / 2);
    halfpower *= halfpower;
    if (b & 1)
    {
        return a * halfpower;
    }
    return halfpower;
}
int main(){
    int a;
    int b;
    cin >> a >> b;
    cout << fastPower(a, b) << endl;

    return 0;
}