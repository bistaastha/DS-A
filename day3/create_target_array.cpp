vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> na;
        
        for(int i = 0; i < nums.size(); i++){
            na.insert(na.begin() + index[i], nums[i]);
        }
        return na;
}

int main() {
    vector<int> nums, index;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        index.push_back(x);
    }

    vector<int> na = createTargetArray(nums, index);
}