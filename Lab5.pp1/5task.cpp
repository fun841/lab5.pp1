#include <iostream>
#include <deque>
using namespace std;
int main() {
    deque<int> dq;

    dq.push_front(10);
    dq.push_back(20);
    dq.push_front(5);
    cout << "Deque contains: ";
    for (int x : dq) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Pop back: " << dq.back() << endl;
    dq.pop_back();
    cout << "Pop front: " << dq.front() << endl;
    dq.pop_front();
    cout << "Remaining: ";
    for (int x : dq) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}