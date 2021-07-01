#include<bits/stdc++.h>
using namespace std;

string truncateSentence(string s, int k) {
        int l = s.length();
        int c = 0;
        string s1 = "";
        for(int i = 0; i < l; i++){
            if (s[i] == ' '){
                c++;
            }
            if(c == k){
                break;
            }
            s1 += s[i];

        }
        
        return s1;
    }

int main() {
   string s;
   int k;
   getline(cin, s);
   cin >> k;

   string s2 = truncateSentence(s, k);
   
    
}