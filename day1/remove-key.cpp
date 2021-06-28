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

    cout << "Enter key" << endl;

    cin >> k;
    int c = n;
    j = n - 1;
    for(int i = 0; i < j; i++){
        if(arr[i] == k){
            while(arr[j] == k) {
                j--;
                c--;
            }
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    for(int i = 0; i < c; i++){
        cout << arr[i];
    }

}