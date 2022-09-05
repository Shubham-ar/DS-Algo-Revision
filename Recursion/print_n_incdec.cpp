#include<iostream>
using namespace std;
void dec(int n){
    if(n==1){
        cout <<n<<endl;
        return;
    }
    cout << n<<endl;
    dec(n - 1);
}
// void dec2(int n){
//     if(n==0){
//         return;
//     }
//     cout << n;
//     dec2(n - 1);
// }
void inc(int n){
    if(n==0){
        return;
    }
    inc(n - 1);
    cout << n;
}
int main(){
    int n;
    cin >> n;

    inc(n);
    return 0;
}