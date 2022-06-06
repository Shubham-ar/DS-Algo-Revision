#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char a[]){

    int i = 0;
    int j = strlen(a) - 1;
    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){

    // palindrome is symmetrical from both ends.

    char arr[1000];
    cin.getline(arr,1000);

    if(isPalindrome(arr)){
        cout << "The string is palindromic string";
    }
    else{
        cout << "Not a palindromic string";
    }

    return 0;
}