#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test, count = 0;
    cin >> test;
    while(count != test){
        int N, r = 0, c = 0, k = 0;
        cin >> N;
        int matrix[N][N];
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> matrix[i][j];
                if(i == j) k += matrix[i][j];
            }
        }
        for(int i = 0; i < N; i++){
            set <int> s, s1;
            for(int j = 0; j < N; j++){
                   s.insert(matrix[i][j]);
                   s1.insert(matrix[j][i]);
            }
            if(s.size() != N) r++;
            if(s1.size() != N) c++;
        }
        count++;
        cout << "Case #"<<count<<":"<<" "<<k<<" "<<r<<" "<<c<<endl;
    }
}