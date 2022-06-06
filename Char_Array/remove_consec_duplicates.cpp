#include<iostream>
#include<cstring>
using namespace std;

void removeDuplicates(char arr[]){

    int i = 0;
    int j = i + 1;

    if(strlen(arr)==1||strlen(arr)==1){
        return;
    }
    while(i<=j && j<strlen(arr)-1){
        if(arr[i]==arr[j]){
            j++;
        }
        else
        {
            i++;
            arr[i] = arr[j];
        }
    }
    arr[i + 1] = '\0';
}

// complete the problem with o(1) space/.
// coooooddingg -> coding
int main(){
    char arr[1000];
    cin.getline(arr, 1000);

    removeDuplicates(arr);
    cout << arr << endl;
    return 0;
}