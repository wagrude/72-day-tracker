#include <bits/stdc++.h>
using namespace std;

// pairs
void explainpairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {3, 4}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl; // array ke index 1 pe jo pair hai uska second element print hoga
}

// vectors
void explainvectors()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // emplace_back is faster than push_back
    v.push_back(3);
    cout << v[1] << endl;     // 1 2 3
    cout << v.size() << endl; // size of vector

    // iterating over a vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int>::iterator it = v.begin();
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // *it is used to get the value at the iterator position and not the address of the iterator position
    // using range based for loop
    for (auto &value : v)
    {
        cout << value << " ";
    }
    cout << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    v.erase(v.begin() + 1); // erasing the element at index 1
    for (auto &value : v)
    {
        cout << value << " ";
    }
    cout << endl;
    v.erase(v.begin() + 2, v.begin() + 3); //[start,end) erasing the elements from index 2 to index 3]
    v.insert(v.begin() + 1, 5);            // inserting 5 at index 1
    for (auto &value : v)
    {
        cout << value << " ";
    }
    cout << endl;
    vector<int> copy(5, 100); // creating a vector of size 5 with all elements as 100
    for (auto &value : copy)
    {
        cout << value << " ";
    }
    cout << endl;
    v.insert(v.begin(), copy.begin(), copy.end()); // inserting the elements of copy vector at the end of v vector
    for (auto &value : v)
    {
        cout << value << " ";
    }
    cout << endl;
}

// lists
void explainlists()
{
    list<int> ls;
    ls.push_back(2);     // pushing 2 at the back of the list
    ls.emplace_back(4);  // pushing 4 at the back of the list
    ls.push_front(5);    // pushing 5 at the front of the list
    ls.emplace_front(3); // pushing 3 at the front of the list
    for (auto b : ls)
    {
        cout << b << " ";
    }
    cout << endl;
    // push and emplace difference is that push creates a temporary object and then moves it to the list while emplace constructs the object in place without creating a temporary object which makes it faster than push
    ls.erase(ls.begin()); // erasing the first element of the list
}

// deque
void explaindeque()
{
    deque<int> d;
    d.push_back(1);
    d.emplace_back(2);
    d.push_front(3);
    d.emplace_front(4);
    for (auto b : d)
    {
        cout << b << " ";
    }
    cout << endl;
}

// stack
void explainstack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top() << endl; // 3
    st.pop();
    cout << st.top() << endl; // 2
    stack<int> st1, st2;
    st1.swap(st2); // swapping the contents of st1 and st2
}

int main()
{
    // // print(5);
    // explainpairs();
    // explainvectors();
    explainlists();

    return 0;
}