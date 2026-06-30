//Grouping Anagrams using map
#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <string> v;
    unordered_map<string, vector<string>> m;
    int n;
    cout<<"Number of words : ";
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(auto s:v){
        string s1=s;
        sort(s1.begin(), s1.end());
        m[s1].push_back(s);
    }
    cout<<endl;
    for(auto& a:m){
        for(auto i:m[a.first]){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}