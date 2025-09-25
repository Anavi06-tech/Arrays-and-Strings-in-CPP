#include<iostream>
using namespace std;

int main(){
    string str1;
    string str2;
    string str3;
    
    cout<<"Enter first string\n";
    cin>>str1;
    cout<<"Enter second string\n";
    cin>>str2;
    str3=str1+" "+str2;
    cout<<"Concatenated string is "<<str3;
    return 0;
}

// OUTPUT
// Enter first string
// Anavi
// Enter second string
// Kashyup
// Concatenated string is Anavi Kashyup
