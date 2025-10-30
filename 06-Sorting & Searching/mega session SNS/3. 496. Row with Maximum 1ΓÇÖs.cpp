int Solution::rowWithMaxOnes(const vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();

    int maxCnt = 0;
    int maxIdx = -1;

    for(int i=0;i<n;i++){
        // will find nos 1's in ith row
        auto it = lower_bound(mat[i].begin(), mat[i].end(), 1);
        int firstOneIdx = it - mat[i].begin();
        int ones = m - firstOneIdx; // ith row ke number of 1's

        if(ones > maxCnt){
            maxCnt = ones;
            maxIdx = i;
        }
    }

    return maxIdx;
}