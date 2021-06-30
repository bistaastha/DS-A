#include<bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m1, m2;
        
        for(int i = 0; i < nums1.size(); i++){
            if(m1.find(nums1[i]) != m1.end())
                m1[nums1[i]] += 1;
            else
                m1[nums1[i]] = 1;
            
        }
        
        for(int i = 0; i < nums2.size(); i++){
            if(m2.find(nums2[i]) != m2.end())
                m2[nums2[i]] += 1;
            else
                m2[nums2[i]] = 1;
            
        }
        
        vector<int> inter;
        
        for(auto i : m1){
            int j = 0;
            if(m2.find(i.first) != m2.end()){
                auto ci = m2.find(i.first);
                if(i.second < ci->second)
                    j = i.second;
                else
                    j = ci->second;
            }
            
            for(int k = 0; k < j; k++){
                inter.push_back(i.first);
            }
        }
        return inter;
}

int main() {
    int n, m;

    cin >> n >> m;
    vector<int> num1, num2;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        num1.push_back(x);
    }

    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        num2.push_back(x);
    }

    vector<int> a = intersect(num1, num2);

    for(auto x : a){
        cout << x << " ";
    }
}