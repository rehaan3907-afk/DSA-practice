#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    int a;
    int i;
    for ( i = 0; i < 5; i++) {
        cin >> a;
        v.push_back(a);
    }
    int s;
    cout << "Enter the number to search: ";
    cin >> s;
    bool found = false;
    for (i =0; i<5; i++){
        if(v.at(i)==s){
            found= true;
            break;
        }

    }
    if (found)
        cout << "Found  "<<s<<" at "<<i<< endl;
    else
        cout << s<<"Not found"<< endl;
    return 0;
}