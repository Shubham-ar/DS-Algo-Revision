#include<iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    char arr[1000];
    

    for (int i = 0; i < n;i++){
        cin.getline(arr, 1000);
        cout << arr << endl;
    }
}