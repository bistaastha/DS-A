#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, fe;
    cin >> n;
    int arr[n], arr2[n + 1];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cin >> fe;

    arr2[0] = fe;
    for(int i = 0; i < n + 1; i++){
        arr2[i] = arr2[i - 1] ^ arr[i - 1];
    }


}