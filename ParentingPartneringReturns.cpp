#include<bits/stdc++.h>

using namespace std;

void printCases(int count, string result){
     cout << "Case #" << count << ":" << " " << result << endl;
}
string setActivities(vector<tuple<int, int, int>> list){
    sort(list.begin(), list.end());
    char order[list.size()];
    int CameronEndingTime = -1, JamieEndingTime = -1 , s,e, index;
    for(int i = 0; i < list.size(); i++){
        tie(s,e,index) = list[i];
        if(s >= CameronEndingTime){
                CameronEndingTime = e;
                order[index] = 'C';
        }
        else if(s >= JamieEndingTime){
            JamieEndingTime = e;
            order[index] = 'J';
        }
        else break;
    }
    order[list.size()] = '\0';
    string str(order);
    return str.length() == list.size() ? str : "IMPOSSIBLE";
}
void testcases(){
    int test, count = 0;
    cin >> test;
    while(count != test){
        int activities, start, end;
        cin >> activities;
        vector<tuple<int, int, int>> list;
        for(int i = 0 ; i < activities; i++){
            cin >> start >> end;
            list.push_back({start, end, i});
        }
        count++;
        printCases(count, setActivities(list));
    }
}

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    testcases();
    return 0;
}