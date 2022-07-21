#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string s0;
    string s1(s0);
    string s2 = "hello world";
    string s3("Hello");
    string s4 = s3;

    cout << s2 << endl;

    for (int i = 0; i < s2.length();i++){
        cout << s2[i] << ",";
    }
    cout << endl;
    for (char c : s2)
    {
        cout << c << ".";
    }
        return 0;
}