#include<bits/stdc++.h>
using namespace std;

vector<bool> tc(vector<int>& v, int et){
    int max = v[0];

    for(int i = 1; i < v.size(); i++){
        if(v[i] > max){
            max = v[i];
        }
    }

    vector<bool> b;

    for(int i = 0; i < v.size(); i++) {
        if(et + v[i] <= max){
            b.push_back(true);
        }
        else{
            b.push_back(false);
        }
    }

    return b;
}

int main() {
    int n, et;
    cin >> n;
    vector<int> t;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        t.push_back(x);
    }
    cin >> et;
    vector<bool> b = tc(t, et);

    for(auto x: b){
        cout << x << " ";
    }

}