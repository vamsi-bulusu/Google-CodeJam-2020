#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printOutput(int caseNum, string str){
    cout << "Case #" << caseNum << ":" << " " << str << endl;
}
string matchParenthesis(string str){
    int depth = 0;
    string temp = "";
    for(int i = 0; i < str.size(); i++){
        int digit = (int)str[i] - 48;
        for(int d = 0; d < max(0, digit-depth); d++){
            temp += "(";
        }
        for(int d = 0; d < max(0, depth-digit); d++){
            temp += ")";
        }
        temp += str[i];
        depth = digit;
    }
    for(int i = 0; i < depth; i++){
        temp += ")";
    }
    return temp;
}
void readInputs(){
    int test, count = 0;
    cin >> test;
    while(count != test){
        string str;
        cin >> str;
        str = matchParenthesis(str);
        count++;
        printOutput(count, str);
    }
}
int main(){
    readInputs();
}