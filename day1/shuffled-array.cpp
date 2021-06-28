#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cout << "Enter number of elements";
    cout << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements:" << endl;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int arr2[n];

    int k = 0;

    for(int i = 0, j = n/2; j < n; i++. j++){
        arr2[k] = arr[i];
        arr2[k + 1] = arr[j];

        k += 2;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i];
    }

}