#include <iostream>
#include <string>
using namespace std;
void TOH (int n, string S, string T, string A){
    if (n==1){
        cout<<"Move "<< n<<" from "<<S<<" to "<<T<<endl;
        return ;
    }
    TOH(n-1,S,A,T);
    cout<<"Move "<< n<<" from "<<S<<" to "<<T<<endl;
    TOH(n-1,A,T,S);
    return;
}

int main(){
    int n;
    cout<<"Enter number of Disks : ";
    cin>>n;
    TOH(n,"A","C","B");
    return 0;
}