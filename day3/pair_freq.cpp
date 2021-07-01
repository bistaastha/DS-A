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
        if((2*i + 1) < n){
            for(int j = 0; j < arr[2*i]; j++){
                cout << arr[2*i + 1] << " ";
            }
        }
        else{
            break;
        }
    }