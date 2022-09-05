#include<iostream>
using namespace std;
int main(){
    // bruteforce method
    int arr[1000][1000];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m;j++){
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int is = 0; is < n; is++)
    {
        for (int js = 0; js < n;js++){

            for (int ie = is + 1; ie < n;ie++){
                for (int je = js + 1; je < m;je++){
                    int localsum = 0;
                    for (int i = is; i <= ie; i++)
                    {
                        for (int j = js; j <= je;j++){
                            localsum += arr[i][j];
                        }
                    }
                    cout << "Local Sum is: " << localsum << endl;
                    sum += localsum;
                }
            }
        }
    }

    cout << "total sum is" << sum << endl;
    return 0;
}