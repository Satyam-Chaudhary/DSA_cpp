#include <iostream>
#include <vector>
using namespace std;

void explainPair()
{
    // container
    // pair lies in the utility library
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    // storing more than 2 variables in pair --> using nested pairs

    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;

    // pair can store any data type
    pair<string, string> p3 = {"Satyam", "Chaudhary"};
    cout << p3.first << " " << p3.second << endl;

    // arrays can store pairs --> pairs can be treated as daa type
    pair<int, int> arr[] = {{1, 3}, {3, 6}, {6, 4}};
    cout << arr[1].second << endl;
}

// vectors
void explainVectors()
{
    // container ; dynamic in nature i.e modify the size of the vector

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // dynamically increase the size of vector and put 2 at the back ; faster than push_back

    // can store pairs

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});  // in push_back it is given within {}
    vec.emplace_back(3, 4); // in emplace_back {} not required

    // can define the size initialy

    vector<int> v2(5);
    vector<int> v3(5, 20); // will place 20 as the inittial 5 values
    vector<int> v4(v3);    // copy the vector v3 inside v4

    // printing the vector
    cout << v[0] << endl;
    cout << v[1] << endl;

    // using iterator --> points to the memory where memory is lying

    vector<int> v5 = {1, 2, 3, 4, 5}; // can be intialised like this
    vector<int>::iterator it = v5.begin();
    it++;
    cout << *it << endl; //* points at the value at that memory
    it += 2;
    cout << *it << endl;
    
    //end() , rend() , rbegin()

    vector<int>::iterator it2 = v.end(); //points to the the memory just after the last index poof vector
    cout << *it2 << endl;
    it2--;
    cout << *it2 << endl;
    
    //back()

    cout << v5.back() << endl; //--> referncce to the last element of the iterator rather than the memory
    // cout << v5.begin() << endl; --> begin() function returns an iterator and can't directly output an iterator

    //printing the vector 
     for(vector<int>::iterator it = v5.begin() ; it != v5.end() ; it++){
        cout << *it << " ";
    }
    cout<<endl;
    
    //other short way

    for(auto it = v5.begin() ; it != v5.end() ; it++){
        cout << *it<<" ";
    }
    cout << endl;
    //or --> using for each loop
    //FOR EACH LOOP
    for(auto it : v5){
        cout << it << " "; //doesn't require * atr it
    }
    cout << endl;

    //erase

    v5.erase(v5.begin() + 1 ); //erases 2
    for(auto it : v5){
        cout << it << " "; //doesn't require * atr it
    }
    cout << endl;

    //delete

    vector<int> v6 = {1, 2, 3, 4, 5};

    v6.erase(v6.begin() + 1 , v6.begin()+4);//deletes 3,4 i.e leaving starting and end
    for(auto it :v6){
        cout << it << " ";
    }
    cout << endl;

    //Insert function

    vector<int> v7(2,100);
    v7.insert(v7.begin() , 20);
    for(auto it :v7){
        cout << it << " ";
    }
    cout << endl;

    v7.insert(v7.begin()+1 , 2 , 70);
    for(auto it :v7){
        cout << it << " ";
    }
    cout << endl;

    vector<int> copy(2,50);
    v7.insert(v7.begin() + 1 , copy.begin() , copy.end());
    for(auto it :v7){
        cout << it << " ";
    }
    cout << endl;
    //size
    cout << v7.size() <<endl;

    //pop_back
    v7.pop_back();
    for(auto it = v7.begin() ; it != v7.end() ; it++){
        cout << *it <<" ";
    }
    cout << endl;

    //swap
    vector<int>v8 = {1,2,3};
    for(auto it : v8)
        cout << it << " ";
    cout << endl;
    v8.swap((v7));
    for(auto it : v8)
        cout << it << " ";
    cout << endl;

//clear

    v8.clear();
    for(auto it : v8)
        cout << it << " ";
    cout << endl;

//empty
    cout<<v8.empty()<<endl; //1--> empty --> true
    cout<<v7.empty()<<endl; //2 --> not emopty --> false


}

void explainLists(){
    
}

int main()
{
    // explainPair();
    // explainVectors();
    explainLists();
    return 0;
}