// You are using GCC
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> v1(10);
//     cout<<"Size of vector: " <<v1.size()<<endl;
//     for(int i=0;i<10;i++){
//         v1[i] = i;
//     }
//     for(int i=10;i<20;i++){
//         v1.push_back(i);
//     }
//     cout<<"Size of vector: "<<v1.size()<<endl;
//     for(int i=0;i<20;i++){
//         cout<<v1[i]<<" ";
//     }
//     cout<<endl;
//     v1.pop_back();
//     v1.pop_back();
//     cout<<"New size of the vector: "<<v1.size()<<endl;
//     vector<int>::iterator v = v1.begin();
//     while(v!=v1.end()){
//         cout<<"value of v = "<<*v<<endl;
//         v++;
//     }
//     cout<<endl;
// }

#include <bits/stdc++.h>
using namespace std;

void display(list<int> &l)
{
    list<int>::iterator p;
    for (p = l.begin(); p != l.end(); p++)
    {
        cout << *p << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1;
    list<int> list2(5);
    for (int i = 0; i < 3; i++)
    {
        list2.push_back(i);
    }
    cout << "Displaying list1: ";
    display(list1);
    list<int>::iterator p;
    for (p = list2.begin(); p != list2.end(); p++)
    {
        *p = 1;
    }
    cout << "Displaying list2: ";
    display(list2);
    cout << "Pushing elements at front: ";
    list1.push_front(100);
    display(list1);
    cout << "Popping elements from front: ";
    list2.pop_front();
    display(list2);
    cout << "Sorting first list: ";
    list1.sort();
    cout << "Sorting second list: ";
    list2.sort();
    display(list2);
    cout << "Merging list: ";
    list1.merge(list2);
    display(list1);
    cout << endl
         << endl;
    list1.reverse();
    cout << "Reversing list: ";
    display(list1);
}






















