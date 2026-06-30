//Daily Temperatures (Next Greater Element Problem)
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int n;
    vector <int> temp;
    cout<<"Enter number of daily temperatures to be stored :";
    cin>>n;
    cout<<"Enter the vector elements :"<<endl;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        temp.push_back(a);
    }
    int a= temp.size();
    //stack contins the index of the days whose next greater temp is yet to be found in monotonic order
    stack <int> s;
    vector <int> days(a,0);
    for(int i=0;i<a;i++){
        while(!s.empty() && temp[i]>temp[s.top()]){//checking for the next greater temp
            int prev=s.top();
            s.pop();
            days[prev]=i-prev;
        }
        s.push(i);//Each day pushed to stack
    }
    cout<<"Answer array : ";
    for(int a:days){
        cout<<a<<" ";
    }   
}