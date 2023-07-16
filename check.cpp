#include<bits/stdc++.h>
using namespace std;

vector<int> printNos;
void f(int i , int n){
    // Write Your Code Here
    if(i < 1)
        return;
    f(i - 1 ,  n);
    printNos.push_back(i);
}

int main(){
    int n;
    cin >> n;
    f(n , n);
    for(auto it : printNos){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}