#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector_name(size, initializeValue)
    vector<int> v(5, 1);

    vector copyvector(v);
    cout << "copyvector(v)-> ";
    for (int i : copyvector)
        cout << i << " ";
    cout << endl;

    cout << "capacity-> " << v.capacity() << endl;

    // vector doubles its size on addition of new element when insufficient space.
    v.push_back(1);
    cout << "capacity-> " << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity-> " << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity-> " << v.capacity() << endl;

    cout << "size-> " << v.size() << endl;

    cout << "element at index[2]-> " << v.at(2) << endl;

    cout << "first elem-> " << v.front() << endl;
    cout << "last elem-> " << v.back() << endl;

    cout << "before pop-> ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop-> ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "capacity before clear-> " << v.capacity() << endl;
    cout << "size before clear-> " << v.size() << endl;

    v.clear();

    cout << "capacity after clear-> " << v.capacity() << endl;
    cout << "size after clear-> " << v.size() << endl;

    return 0;
}
