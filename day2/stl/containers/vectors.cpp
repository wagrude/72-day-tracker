#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> first;
    // vector<int> second;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    // second.push_back(100);
    // second.push_back(200); 
    // second.push_back(300);
    // swap the contents of first and second
    // first.swap(second);
    // cout<<"first vector: ";
    // for(int i=0; i<first.size(); i++){
    //     cout<<first[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"second vector: ";
    // for(int i=0; i<second.size(); i++){
    //     cout<<second[i]<<" ";
    // }
    // cout<<endl;
    // vector<int> marks; // empty vector
    // marks.reserve(10); // reserve space for 10 elements
    // vector<int> miles(10); 
    // vector<int> money(10, 0);
    // vector<int> price{10, 20, 30, 40, 50};
    // marks.begin();
    // cout<<*(marks.begin())<<endl;
    // cout<<*(marks.end())<<endl; // garbage value
    // marks.push_back(100);
    // marks.push_back(90);
    // marks.push_back(40);
    // marks.push_back(70);
    // cout<<marks.size()<<endl;
    // marks.pop_back();
    // cout<<marks.size()<<endl;
    // cout<<marks.front()<<endl;
    // cout<<marks.back()<<endl;
    // cout<<marks.capacity()<<endl;
    // if(marks.empty()){
    //     cout<<"vector is empty"<<endl;
    // }
    // else{
    //     cout<<"vector is not empty"<<endl;
    // }
    // cout<<marks[0]<<endl;
    // cout<<marks.at(0)<<endl;
    // cout<<marks.capacity()<<endl;
    // cout<<marks.max_size()<<endl;

    vector<int>::iterator it=first.begin();
    while(it!=first.end()){
        cout<<*it<<" ";
        it++;
    }

    vector<vector<int>> brr(4);
    brr[0]=vector<int>(4);
    brr[1]=vector<int>(2);
    brr[2]=vector<int>(5);
    brr[3]=vector<int>(3);

    int rowcount=brr.size();
    int colcount=brr[0].size();


    return 0;
}