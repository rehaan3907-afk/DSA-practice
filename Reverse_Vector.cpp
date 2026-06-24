/*Can also use reverse(v.begin(),v.end()) instead of the whole swap drama*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int a;
    int i;
    for ( i = 0; i < 5; i++) {
        cin >> a;
        v.push_back(a);
    }
    int j=4;
    int b;
    i=0;
    while(i<=j){
        a=v.at(i);
        b=v.at(j);
        swap(a,b);
        v.at(i)=a;
        v.at(j)=b;
        i++;
        j--;
    }
    for(i=0;i<5 ;i++){
        cout<<v[i]<<endl;
    }
}
