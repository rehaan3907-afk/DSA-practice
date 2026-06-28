#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int rotate_vec(vector <int> &nums, int k){
    rotate(nums.begin(),nums.end()-k,nums.end());
    for (int a:nums){
        cout<<a<<" ";
    }
}
int main(){
    int n;
    vector <int> nums;
    cout<<"Enter number of integers in vector :";
    cin>>n;
    cout<<"Enter the vector elements :"<<endl;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    int k;
    cout<<"Enter number of steps to rotate by :";
    cin>>k;
    rotate_vec(nums, k);

    return 0;
}