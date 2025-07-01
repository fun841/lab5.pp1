#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> q;
    int num;

    cout << "Enqueue: ";
    for (int i = 0; i < 5; ++i) {
        cin >> num;
        q.push(num);  // enqueue
    }

    cout << "Dequeued: ";
    while (!q.empty()) {
        cout << q.front() << " ";  // print front element
        q.pop();                   // dequeue
    }
    cout << endl;

    return 0;
}