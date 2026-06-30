//Intersection of 2 arrays in O(n)
#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int n;
    vector <int> intersection;
    vector <int> arr1;
    cout<<"Enter number of integers in array 1:";
    cin>>n;
    cout<<"Enter the array 1 elements :"<<endl;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        arr1.push_back(a);
    }
    vector <int> arr2;
    cout<<"Enter number of integers in array 2 :";
    cin>>n;
    cout<<"Enter the array 2 elements :"<<endl;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        arr2.push_back(a);
    }
    set <int> s;
    for (int a:arr1){
        s.insert(a);
    }
    for (int a :arr2){
        if (s.find(a)!=s.end()){
            intersection.push_back(a);
            s.erase(a);
        }
    }
    for (int a:intersection){
        cout<<a<<" ";
    }
    return 0;
}