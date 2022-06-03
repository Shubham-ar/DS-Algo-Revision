#include<iostream>
using namespace std;
int main(){
    int arr[1000][1000];
    int n;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    cout << "Enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }

    //wave print

    for (int i = 0; i < n;i++){
        if(i&1){
            for (int j = n - 1; j >= 0; j--){
                cout << arr[i][j]<<" ";
            }
        }
        else{
            
            for (int j = 0; j < 3; j++){
                cout << arr[i][j]<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}