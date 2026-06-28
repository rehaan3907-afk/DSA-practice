//Closest point to origin in 2D 
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int dist(pair<int,int> p){
    int s = pow(p.first, 2) + pow(p.second, 2);
    return s;
}
bool comparator(pair<int,int> p1,pair<int,int> p2){
        if(dist(p1)<dist(p2))
            return true;
        else{
            if(dist(p1)==dist(p2)){
                if(p1.first < p2.first)
                    return true;
                else
                    return false;
            }
            else
                return false;
        }  
            
}

int main(){
    int n;
    vector<pair<int,int>> v;
    cin >> n;
    for (int i = 0; i < n; i++){
        int a;
        int b;
        cin >> a;
        cin >> b;
        v.push_back({a,b});
    }
    sort(v.begin(), v.end(), comparator);
    for (auto p: v){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
