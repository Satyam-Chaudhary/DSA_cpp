#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int>p1 , pair<int, int>p2){
    if(p1.second < p2.second)
        return true;
    if(p1.second > p2.second)
        return false;
    if(p1.first < p1.second)
        return true;
    return false;
}

void explainSort(){
    //increassing order
    int arr[] = {2,5,2,1,5};
    sort(arr , arr + 4);
    for(int i =0; i < 5 ; i++)
        cout << arr[i] << " ";
    cout << endl;

    //decreasing order
    sort(arr , arr + 5 , greater<int>());
    for(int i =0; i < 5 ; i++)
        cout << arr[i] << " ";
    cout << endl;

    //comp --> order decided by me

    pair<int, int> a[] = {{1,2}, {2,1}, {4,1}, {3,1}, {5,2}};
    //sort according to second element
    //if second element same then sort according to first
    sort(arr , arr + 5 , comp());
    for(int i =0; i < 5 ; i++)
        cout << pair.first << " "<< pair.second << " ";
    cout << endl;

}

int main()
{
    explainSort();
    return 0;
}