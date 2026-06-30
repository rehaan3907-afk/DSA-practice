//First unique char in a stream
#include<iostream>
#include<vector>
#include<queue>
#include<string>
using namespace std;
int main(){
    queue <char> q;
    string s;
    cout<<"Enter the stream of characters :"<<endl;
    cin>>s;
    int n=s.length();
    for(int i=0;i < n;i++){ 
        int k=0;
        while(!q.empty() && s[i]==q.front()){
            q.pop();
            k=1;
        }
        if(k==0) q.push(s[i]);
        if(q.empty()){
            cout<<"#";
        }
        else{
            cout<<q.front();
        }
    }
    return 0;
}