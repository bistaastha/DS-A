//leetcode solution
    int peakIndexInMountainArray(vector<int>& arr) {
        if(arr.size() < 3){
            return -1;
        }
        //find maximum first
        //then return its index
        int max = arr[0];
        int ind = 0;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] > max) {
                max = arr[i];
                ind = i;
            }
        }
        return ind;
    }