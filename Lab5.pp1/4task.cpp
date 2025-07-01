#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main() {
    queue<string> q;
    int n;
    cin >> n;

    cout << "Enter " << n << " names: ";
    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;
        q.push(name);
    }

    while (!q.empty()) {
        cout << "Serving: " << q.front() << endl;
        q.pop();
    }

    return 0;
}