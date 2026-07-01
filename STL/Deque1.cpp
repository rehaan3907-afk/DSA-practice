//Sliding Window Maximum
#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main(){
    int n;
    vector <int> nums;
    cout<<"Enter number of integers in array :";
    cin>>n;
    cout<<"Enter the array elements :"<<endl;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    vector <int> res;
    int k;
    cout<<"Enter siding window size :";
    cin>>k;
    deque <int> dq;
    for(int i=0;i<n;i++){
        //removing elements outside of window from front
        if(!dq.empty() && dq.front() == i-k){
            dq.pop_front();
        }
        //remove smaller elements from back
        while(!dq.empty() && nums[dq.back()] <= nums[i]){
            dq.pop_back();
        }
        //current index
        dq.push_back(i);
        //push to result only after window complete
        if(i >= k-1) {
            res.push_back(nums[dq.front()]);
        }
    }
    cout<<"output :"<<endl;
    for(int i:res){
            cout<<i<<" ";
    }
    return 0;
}