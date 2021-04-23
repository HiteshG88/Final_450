// https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/

#include <iostream>
#include <queue>
#include <string>
using namespace std;

bool isRotation(string s1, string s2){
    if(s1.length() != s2.length())
        return false;
    string temp = s1 + s1;
    if(temp.find(s2) != string::npos){
        return true;
    }    
    return false;
}

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    cout << isRotation(s1,s2);
}