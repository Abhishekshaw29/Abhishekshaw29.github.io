#include <iostream>
#include <list>
using namespace std;
int main()
{
    // list is like doubly linked list
    //list can help us to store element in any part of list

    list<int> l;
    list<int> l1{
        1,
        2,
        2,
        3,
        4,
    };
    list<string> l2{"hello", "world", "cat"};
    l2.push_back("man");
    l2.sort();
    l2.size();
    l2.reverse();

    l2.pop_back();
    l2.push_back("kiwi");
    for (auto it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    l2.push_back("orange");
    l2.push_back("lemon");
    l2.push_back("kiwi");
    string f;
    cin >> f;
    l2.remove(f);
    for (string s : l2)
    {
        cout << s << "--->";
    }
    //erase one or more element in the list
    auto it = l2.begin();
    it++;
    l2.erase(it);
    // l2.insert(it,"gauva");
}
