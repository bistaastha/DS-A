//leetcode solution

int uniqueMorseRepresentations(vector<string>& words) {
    string codearr[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> nw;
        for(auto i:words){
            string s = "";
            for(auto j:i){
                s += codearr[j - 97];
                cout<<s<<endl;
            }
            nw.insert(s);
        }
        return nw.size();
    }

