#include <bits/stdc++.h>
using namespace std;


vector<int> printNos(int x){
    vector<int> v;
    if(x > 0){
        v = printNos(x - 1);
        v.push_back(x);
    }
    return v;
}
int main()
{
    int x = 5;
    vector<int> v = printNos(x);
    for(auto it : v){
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}