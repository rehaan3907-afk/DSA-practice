//kth largest element in an usorted array
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int n;
    priority_queue <int,vector<int>,greater<int>> pq;//min heap 
    vector <int> v;
    cout<<"Enter number of integers in array :";
    cin>>n;
    cout<<"Enter the array elements :"<<endl;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<"Enter value of k :";
    int k;
    cin>>k;
    for(int a:v){
        pq.push(a);
        if(pq.size() > k){//limitng pq size to only fit k elements
            pq.pop();
        }
    }
    cout<<"Output: "<<pq.top()<<endl;
    return 0;
}