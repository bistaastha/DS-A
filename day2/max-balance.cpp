#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int a[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    int num = -1, max = 0;
    for(int i = 0; i < m; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += a[i][j];
        }

        if(num == -1){
            num = i;
            max = sum;
        }
        else if(sum > max){
            num = i;
            max = sum;
        }
    }


    cout << "Richest customer: " << num + 1;
}