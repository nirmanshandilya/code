#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d = {1, 2, 3, 4, 5, 6, 7, 8};

    d.push_back(9);
    d.push_front(0);

    cout << "before ";
    for (int i : d)
        cout << i << " ";

    cout << endl;

    // d.pop_back();

    d.erase(d.begin(), d.begin() + 1);

    cout << "after ";
    for (int i : d)
        cout << i << " ";

    cout << endl;
}