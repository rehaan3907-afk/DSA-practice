/*Text Editor Cursor Simulation*/
#include <iostream>
#include <list>
#include <string>
using namespace std;
int main(){
    list<char> l;
    string s;
    cin >> s;
    auto it = l.end(); //iterator 
    for (char c : s) {
        if (c == '<') {
            if (it != l.begin()) --it;
        } else if (c == '>') {
            if (it != l.end()) ++it;
        } else {
            l.insert(it, c);
        }
    }
    for (char ch : l) {
        cout << ch;
    }
    return 0;
}
