#include<iostream>
using namespace std;
void spiral_print(int arr[][1000],int m,int n){
    int startRow = 0;
    int startCol = 0;
    int endRow = m - 1;
    int endCol = n - 1;

    while(startRow<=endRow && startCol<=endCol){
        // First Row
        for (int i = startCol; i <= endCol;i++){
            cout << arr[startRow][i]<<" ";
        }
        startRow++;

        for (int i = startRow; i <= endRow;i++){
            cout << arr[i][endCol]<<" ";
        }
        endCol--;

        if(endRow>startRow){
            for (int i = endCol; i >= startCol;i--){
             cout << arr[endRow][i] << " ";
            }
        endRow--;
         }
        

        if(endCol>startCol){
            for (int i = endRow; i >= startRow;i--){
             cout << arr[i][startCol] << " ";
            }
       startCol++;
        }
        
        
    }
}
int main(){
 int arr[1000][1000]={0};
 int n;
 cin >> n;
 for (int i = 0; i < n; i++){
     for (int j = 0; j < n;j++){
         cin >> arr[i][j];
     }
 }

 spiral_print(arr, n,n);
 return 0;
}