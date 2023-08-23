#include <iostream>
#include<utility>
#include <vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<map>
using namespace std;

//pair
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

    //output
    // 1 3
    // 1 4 3
    // Satyam Chaudhary
    // 6
}

// vectors --> dynamic arrays
void explainVectors()
{
    // container : dynamic in nature i.e modify the size of the vector

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
        cout << it << " "; //doesn't require * at it
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

//output
    // 1
    // 2
    // 2
    // 4
    // 0
    // 2
    // 5
    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 3 4 5 
    // 1 5 
    // 20 100 100 
    // 20 70 70 100 100 
    // 20 50 50 70 70 100 100 
    // 7
    // 20 50 50 70 70 100 
    // 1 2 3 
    // 20 50 50 70 70 100 

    // 1
    // 0

}

//lists
void explainLists(){
    list<int>ls;
    ls.push_back(1);
    ls.emplace_back(2);

    ls.push_front(5); //much more better than insert function of vectors
    ls.emplace_front(4);

    for(auto it : ls){
        cout << it << " ";
    }
    cout << endl;

    //rest function same as vectors

    //output
    // 4 5 1 2 
}

//deque
void explainDeque(){
    //same as lists
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);

    for(auto it : dq)
        cout << it << " ";
    cout << endl;

    dq.pop_back();
    dq.pop_front();

    for(auto it : dq)
        cout << it << " ";
    cout << endl;
    
    //rest functions are same as vectors

    //output
    // 3 4 1 2 
    // 4 1 

}

//stack --> LIFO(LAST IN FIRST OUT)
void explainStack(){
     stack<int> st;
     st.push(1);
     st.push(2);
     st.push(3);
     st.push(4);
     st.emplace(5);

     cout << st.top() << endl; // 5

     st.pop(); // removes 5

    cout << st.top() << endl; // 4

    cout << st.size() << endl;

    cout << st.empty() << endl; //0 --> false i.e it's not empty

    stack<int> st1;
    stack<int> st2;
    st2.push(1);
    st2.push(2);
    st2.push(3);
    st2.push(4);
    st2.push(5);

    st1.swap(st2);

    //printing elements of stack
    while(st1.empty() != 1){
        auto it = st1.top();
        cout << it << " ";
        st1.pop();
    }
    cout << endl;
    
    //output
    // 5
    // 4
    // 4
    // 0
    // 5 4 3 2 1 
}

//Queue --> FIFO(FIRST IN FIRST OUT)
void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.back() << endl; //4
    cout << q.front() << endl; //1

    q.pop(); // removes 1 .. first in
    cout << q.back() << endl; // 4
    cout << q.front() << endl; // 2
     //size , swap , empty same as stack

    cout << q.size() << endl; //3
    queue<int> q2;
    q2.swap((q));

   
    while(q2.empty() != 1){
        cout << q2.front() <<  " ";
        q2.pop();
    }
    cout << endl;

    //output
    // 4
    // 1
    // 4
    // 2
    // 3
    // 2 3 4 

}

//priority queue
void explainPriorityQueue(){
    priority_queue<int>pq;
    pq.push(2);
    pq.push(5);
    pq.push(7);
    pq.emplace(10);

    cout << pq.top()<< endl;

    pq.pop();

    cout << pq.top()<< endl;

    //output
    // 10
    // 7
}

//set
void expalinset(){
    set<int>st;
    st.insert(1);
    st.emplace(2);
    st.insert(3);
    st.insert(1);
    st.insert(2);
    st.insert(10);

    for(auto num: st)
        cout<< num << endl;

}

//multi set
void expalinMultiSet(){

}

//unorder set
void explainUnorderSet(){

}

//map --> stores {unique and sorted key, value}
void explainMap(){
    map<int, int>mpp;
    map<int, pair<int, int>>mpp2;
    map<pair<int, int> , int>mpp3;
            //KEY AND VALUE
    mpp[1] = 2;
    mpp.emplace(2,2);
    mpp.insert({4,5});
    mpp.insert({3,2});

    for(auto it : mpp)
        cout << it.first << " " << it.second << endl; //like pairs
    // 1 2
    // 2 2
    // 3 2
    // 4 5

    cout << mpp[1] << endl; //2
    cout << mpp[3] <<endl;

    auto it = *mpp.find(4); 
    cout << it.second << endl;

    auto it2 = *mpp.find(5); 
    cout << it2.second << endl;
    //output
    // 1 2
    // 2 2
    // 3 2
    // 4 5
    // 2
    // 2
    // 5
    // 1839017808
}

//multimap --> same as map but stores multiple and sorted key
void explainMultiMap(){
    //same as map but store multiple keys
    //mpp[key] not stored

    multimap<int, int>mpp;
    mpp.insert({1,2});
    mpp.insert({1,4});
    mpp.insert({2,3});
    mpp.insert({2,6});

    for(auto it : mpp)
        cout << it.first << " " << it.second << endl;

    //output
    // 1 2
    // 1 4
    // 2 3
    // 2 6
    
}

void explainUnorderMap(){
    //stores unique but not in sorted way
    unordered_map<int, int>umm;
    umm.insert({1,2});
    umm.insert({1,2});
    umm.insert({1,2});
    umm.insert({2,3});
    umm.insert({5,5});
    umm.insert({2,4});

    for(auto it : umm)
        cout << it.first << " " << it.second << endl;
    
}
int main()
{
    // explainPair();
    // explainVectors();
    // explainLists();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPriorityQueue();
    // expalinset();
    // expalinMultiSet();
    // explainUnorderSet();
    // explainMap();
    // explainMultiMap();
    // explainUnorderMap();
    
    return 0;
}