#include<iostream>
using namespace std;
int main(){

    int arr[1000][1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }

    for (int li = 0; li < n;li++){
        for (int lj = 0; lj < n;lj++){

            for (int ri = li+1; ri < n;ri++){
                for (int rj = lj+1; rj < n;rj++){

                    for (int i = li; i <= ri;i++){
                        for (int j = lj; j <= rj;j++){
                            cout << arr[i][j]<<",";
                        }
                        cout << endl;
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}