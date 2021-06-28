#include<bits/stdc++.h>
using namespace std;

int main() {
    //array inserted in non decreasing order

    int n;
    cout << "Enter number of elements";
    cout << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements:" << endl;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int c = 0;
    for(int i = 0; i < n; i++) {

        if(i != n - 1){
        int j = i + 1;

        while(arr[i] == arr[j]){
            for(int k = j; k < n - 1; k++){
                //shift back

                arr[k] = arr[k+1];
            }
            n--;
            c++;
        }
        }
    }
    cout << n - c << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}