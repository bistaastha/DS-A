#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], arr2[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            
            if(i != j){
                if(arr[i] < arr[j]){
                    count += 1;
                }
            }

        }
        arr2[i] = count;
    }
}