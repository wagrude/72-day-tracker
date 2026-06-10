#include <bits/stdc++.h>
using namespace std;
void explaindeque()
{
    deque<int> dq;
    dq.push_back(1);     // 1
    dq.emplace_back(2);  // 2
    dq.push_front(3);    // 3,2
    dq.emplace_front(4); // 4,3,2

    dq.pop_back();  // 4,3
    dq.pop_front(); // 3

    dq.back();
    dq.front();
}

void explainstack()
{
    stack<int> st;
    st.push(1);    // 1
    st.push(2);    // 2,1
    st.push(3);    // 3,2,1
    st.push(3);    // 3,3,2,1
    st.emplace(5); // 5,3,3,2,1
    cout << st.top() << endl;
    st.pop(); // 3,3,2,1
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;
    stack<int> st1, st2; // st1 and st2 are two different stacks
    st1.swap(st2);       // swapping st1 and st2, now st1 is empty and st2 has all the elements of st1
}

void explainqueue()
{
    queue<int> q;
    q.push(1);    // 1
    q.push(2);    // 1,2
    q.emplace(3); // 1,2,3
    q.back();     // 3
    cout << q.front() << endl;
    q.pop(); // 2,3
    cout << q.front() << endl;
    q.pop(); // 3
    cout << q.front() << endl;
}

void explainpriorityqueue()
{
    // maximum heap
    priority_queue<int> pq;
    pq.push(5);               // 5
    pq.push(2);               // 5,2
    pq.push(8);               // 5,8,2
    pq.emplace(10);           // 10,5,8,2
    cout << pq.top() << endl; // 10
    pq.pop();                 // 5,8,2
    cout << pq.top() << endl; // 8
    // minimum heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(5);     // 5
    minheap.push(2);     // 2,5
    minheap.push(8);     // 2,5,8
    minheap.emplace(10); // 2,5,8,10

    cout << minheap.top() << endl; // 2
}

void explainset()
{
    set<int> s;
    s.insert(1);  //{1}
    s.emplace(2); //{1,2}
    s.insert(2);  //{1,2}
    s.insert(4);  //{1,2,4}
    s.insert(3);  //{1,2,3,4}
    // unique elements are stored in sorted order in set

    auto it = s.find(3);  // it points to 3
    auto it1 = s.find(6); // it1 points to s.end() as 6 is not present in the set
    s.erase(2);           //{1,3,4}

    int cnt = s.count(3); // cnt=1 as 3 is present in the set
    auto it2 = s.find(3);
    s.erase(it2);                //{1,4}
    auto it3 = s.lower_bound(3); // it3 points to 4 as 4 is the first element which is greater than or equal to 3
    // what is lower_bound and upper_bound in set?
    // lower_bound(x) returns an iterator pointing to the first element in the set which is greater than or equal to x
    // upper_bound(x) returns an iterator pointing to the first element in the set which is greater than x

    // what is the difference between lower_bound and upper_bound in set?
    // lower_bound(x) returns an iterator pointing to the first element in the set which is greater than or equal to x
    // upper_bound(x) returns an iterator pointing to the first element in the set which is greater than x
    auto it4 = s.upper_bound(3); // it4 points to 4 as 4
    // why is here both lower_bound and upper_bound pointing to 4?
    // because 3 is not present in the set, so both lower_bound and upper_bound will point to the first element which is greater than 3, which is 4

    // what is i set it to 1
    auto it5 = s.lower_bound(1); // it5 points to 1 as 1 is present in the set
    auto it6 = s.upper_bound(1); // it6 points to 4 as 4 is the first element which is greater than 1
    // ohh got it, if 1 is present in the set, then lower_bound will point to 1 and upper_bound will point to the first element which is greater than 1, which is 4
}

void explainmultiset()
{
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(2); //{1,1,2}
    ms.insert(3); //{1,1,2,3}
    ms.insert(4); //{1,1,2,3,4}

    ms.erase(1); // all 1 are erased
    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    // ms.erase(ms.find(1), ms.find(1) + 2); // what is wrong here?
    

    auto it = ms.find(1);
    ms.erase(it, next(it, 2));
}



void explainunorderedset()
{
    unordered_set<int> us;
   //lower_bound and upper_bound are not present in unordered_set as it is not sorted
}

void explainMap() {
    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    // pair ko key ke roop me use karna hai to mpp3 use karo
    mpp3[{2, 3}] = 10;

    // mpp ka output
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1] << endl;  // Output: 2
    cout << mpp[5] << endl;  // Output: 0 (aur key 5 insert ho jayegi)
}



int main(void)
{
    explaindeque();
    explainstack();
    explainpriorityqueue();
    explainset();
    explainmultiset();
    return 0;
}