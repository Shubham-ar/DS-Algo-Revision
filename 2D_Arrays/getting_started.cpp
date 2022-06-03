#include<iostream>
using namespace std;
int main(){

    int arr[100][100];
    for (int row = 0; row < 3;row++){
        for (int col = 0; col < 3;col++){
            cin >> arr[row][col];
        }
    }
    for (int row = 0; row < 3;row++){
        for (int col = 0; col < 3;col++){
            cout << arr[row][col]<<" ";
        }
        cout << endl;
    }
        return 0;
}