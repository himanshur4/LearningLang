#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p1;
    cout << "Enter pair elements" << endl;
    cin >> p1.first >> p1.second;
    cout << p1.first << " " << p1.second << endl;
    pair<int, pair<int, int>> p2 = {23, {50, 98}};
    cout << p2.second.first << endl;
    pair<int, int> arr[] = {{2, 3}, {9, 2}};
    cout << arr[1].first;
}

void explainVector()
{
    vector<int> v1;
    v1.push_back(2);
    v1.emplace_back(4);
    cout << v1[0] << " " << v1[1] << endl;

    vector<int> v2(4);
    for (auto it : v2)
    {
        cout << it << " ";
    }
    cout << endl;

    vector<int> v3(5, 1);
    for (auto it : v3)
    {
        cout << it << " ";
    }
    cout << endl;

    vector<int> v4 = {3, 2, 4, 5};
    for (auto it : v4)
    {
        cout << it << " ";
    }
    cout << endl;

    vector<pair<int, int>> v5 = {{3, 4}, {8, 9}};
    v5.emplace_back(45, 54);
    for (auto it : v5)
    {
        cout << it.first << " ";
    }
    cout << endl;

    vector<int>::iterator it = v4.begin();
    cout << (*it) << endl;

    // vector<int>::iterator it8=v4.rbegin();
    // vector<int>::iterator it9=v4.rend();
    // cout<<(*it8)<<endl;
    // cout<<(*it9)<<endl;

    vector<int>::iterator it2 = v4.end(); // pointing to a garbage value just next after the last element of the vector
    it2--;
    cout << (*it2) << endl;

    v5.erase(v5.begin(), v5.begin() + 1); // [start,stop)
    for (auto it : v5)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;

    for (vector<int>::iterator it3 = v4.begin(); it3 != v4.end(); it3++)
    {
        cout << (*it3) << " ";
    }
    cout << endl;
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;

    vector<int> v6 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // v6.erase(v6.begin(),v6.end());

    cout << v6.size() << endl;
    v6.erase(v6.begin());
    v6.insert(v6.begin(), 100);
    v6.insert(v6.begin() + 1, 3, 700);
    v6.insert(v6.end(), v4.begin(), v4.end()); // v4={3,2,4,5};
    for (auto i : v6)
    {
        cout << i << " ";
    }
    cout << endl;
    // int p1=v6.pop_back();//it doesn't return integer
    v6.pop_back();

    vector<int> v7(v6);//copy of vector
    for (auto i : v7)
    {
        cout << i << " ";
    }
    cout << endl;

    v7.swap(v4);
    for (auto i : v4)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : v7)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << v7.empty() << endl;
    cout << v7.size() << endl;
    v7.clear();
    cout << v7.empty() << endl;
    cout << v7.size() << endl;
}

void explainList()
{
    list<int> l1;
    l1.push_back(2);
    l1.push_back(3);
    l1.push_front(1); // we can push element to the front of the conatainer using list whereas for pushing the element in the front of the vector, we needed to use insert function, which was slow function
    l1.emplace_back(100);
    l1.emplace_front(200);
    for (auto i : l1)
    {
        cout << i << " ";
    }
    // every function like begin,end,size,clear,etc. is same as of vector
}

void explainDeque()
{
    deque<int> d1;
    d1.push_back(2);
    d1.push_back(3);
    d1.push_front(1);
    d1.emplace_back(100);
    d1.emplace_front(200);
    for (auto i : d1)
    {
        cout << i << " ";
    }
    // similar to list
}

void explainStack()
{
    stack<int> st;
    st.push(3);
    st.push(33);
    st.push(333);
    int n = st.size();
    cout << n << endl;
    // cout<<st[1]; indexing not allowed in stack, push,pop,top are the only 3 major function being used in stack
    //  for(int i=0;i<st.size();i++){//don't use this method as stack size will be vary in every iteration
    //      cout<<st.top()<<" ";
    //      st.pop();
    //  }
    for (int i = 0; i < n; i++)
    {
        int s = st.top() += 1;
        cout << s << " ";
        st.pop();
    }
    cout << endl
         << st.size() << endl;
}

void explainQueue()
{
    queue<int> q;
    q.push(3);
    q.push(5);
    q.push(1);
    q.push(7);
    q.push(9);
    cout << q.back() << " " << q.front() << endl;
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
}

void explainPQ()
{
    priority_queue<int> pq; // elements gets arranged in descending order(max-heap) or ascending order(min-heap)
    pq.push(463);
    pq.push(764);
    pq.push(164);
    pq.push(104);
    int n = pq.size();
    for (int i = 0; i < n; i++)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    priority_queue<int, vector<int>, greater<int>> p1; // min-heap or ascending order
    p1.push(463);
    p1.push(764);
    p1.push(164);
    p1.push(104);
    int m = p1.size();
    for (int i = 0; i < m; i++)
    {
        cout << p1.top() << " ";
        p1.pop();
    }
} 

void explainSet()
{
    set<int> st; // stores unique element in sorted order, and insertion takes logarithmic time
    st.insert(32);
    st.insert(86);
    st.insert(23);
    st.insert(9);
    st.emplace(63);
    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl
         << st.count(32) << endl; // returns either 1 or 0
    set<int>::iterator it1 = st.find(23);
    auto it2 = st.find(636); // this iterator will point after the last element of  the set as it is not found

    cout << (*(it1)) << endl;
    st.erase(86);                      // erasing through elements takes logarithmic time
    st.erase(st.find(9), st.find(32)); // erasing through iterators takes constant time [start,stop)
    for (auto i : st)
    {
        cout << i << " ";
    }
    auto it3 = st.lower_bound(63);
    auto it4 = st.upper_bound(32);
}

void explainMultiSet()
{
    multiset<int> ms; // same as set but stores duplicate element
    ms.insert(6);
    ms.insert(6);
    ms.insert(3);
    ms.insert(8);
    ms.insert(1);
    ms.insert(6);
    for (auto i : ms)
    {
        cout << i << " ";
    }
    cout << endl;
    // ms.erase(6);//erase all ocurrences of 6, this problem can be solved using iterators
    ms.erase(ms.find(6));
    for (auto i : ms)
    {
        cout << i << " ";
    }
}

void explainUnorderedSet()
{
    unordered_set<int> us; // unique and unordered, it has better time complexity in most of the cases than set, upperbound and lowerbound function does not supported, rest all are same
    us.insert(3);
    us.insert(5);
    us.insert(7);
    us.insert(1);
    us.insert(6);
    us.insert(6);
    for (auto i : us)
    {
        cout << i << " ";
    }
}

void explainMap()
{
    map<int, int> mpp; // stores element in sorted order of keys and every key must be unique
    map<int, pair<int, int>> mpp1;
    mpp.insert({2, 4});
    mpp.insert({1, 37});
    // mpp.insert(9,40); use curly braces for passing pair
    mpp.emplace(7, 42);
    mpp[5] = 78;
    mpp[5] = 45; // updation
    for (auto i : mpp)
    {
        cout << i.first << " " << i.second << endl;
    }
    auto it = mpp.find(7);
    // cout<<*(it).second<<endl;

    auto it1 = mpp.lower_bound(7);
    auto it2 = mpp.lower_bound(5);
}

void explainMultiMap()
{
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
}

void explainUnorderedMap()
{
    // same as set and unordered set difference
}

bool com(pair<int,int>a1,pair<int,int>a2){
    if(a2.second>a1.second){
        return true;
    }
    if(a1.second>a2.second){
        return false;
    }
    if(a1.second==a2.second){
        if(a1.first>a2.first){
            return true;
        }
        else{
            return false;
        }
    }

}
void extra()
{
    vector<int> v1 = {8, 6, 2, 1, 3, 8, 7, 5, 4};
    sort(v1.begin(), v1.end());//in ascending order
    // int n=v1.size();
    // sort(v1,v1+n);
    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout<<endl;
    cout<<*max_element(v1.begin(),v1.end());//it gives maximum element in the array
    cout << endl;
    int arr1[4] = {6, 2, 1, 5};
    sort(arr1, arr1 + 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    //Customised sorting
    pair<int,int> arr[]={{4,3},{2,1},{9,4},{6,4},{5,2}};
    //Sort it in increasing order of second element. If element is same, then sort accordind to decreasing order of first element
    //{{2,1},{5,2},{4,3},{9,4},{6,4}}
    sort(arr,arr+5,com);
    for(int i=0;i<5;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    
    string s1="132";//for finding all possible permutation of a string,make sure that the string is in sorted order,otherwise sort it
    sort(s1.begin(),s1.end());
    do{
        cout<<s1<<endl;
    }while(next_permutation(s1.begin(),s1.end()));
}
int main()
{
    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPQ();
    // explainSet();
    // explainMultiSet();
    // explainUnorderedSet();
    // explainMap();
    extra();
    return 0;
}