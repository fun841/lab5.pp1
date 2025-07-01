#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    string input;
    stack<char> s;

    cout << "Enter a string: ";
    getline(cin, input);  // читаем всю строку, включая пробелы

    // Кладём каждый символ строки в стек
    for (int i = 0; i < input.length(); i++) {
        s.push(input[i]);
    }

    // Извлекаем символы из стека и формируем перевёрнутую строку
    string reversed = "";
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    cout << "Reversed string: " << reversed << endl;

    return 0;
}
