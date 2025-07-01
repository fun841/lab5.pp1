#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main(){
    string input;
    deque<char> n;
    cout << "Enter a word: ";
    cin >> input;
    for (char c : input) {
        n.push_back(c);
    }
    bool isPalindrome = true;
    while (n.size() > 1) {
        if (n.front() != n.back()) {
            isPalindrome = false;
            break;
        }
        n.pop_front();
        n.pop_back();
    }

    if (isPalindrome)
        cout << "It is a palindrome" << endl;
    else
        cout << "It is not a palindrome" << endl;

    return 0;
}