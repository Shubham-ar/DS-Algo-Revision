#include<iostream>
using namespace std;

void readLine(char a[], int maxLen, char delim='\n'){

    int i = 0;
    char ch = cin.get();
    while(ch!=delim)
    {
        a[i] = ch;
        i++;
        if(i==(maxLen-1)){
            break;
        }
        ch = cin.get();
    }
    a[i] = '\0';
    return;
}
int main(){

    char arr[1000];

    // cin.getline(arr) this is the method of c++ to do the same thing as we did by a function.
    readLine(arr, 1000);
    cout << arr << endl;
    return 0;
}