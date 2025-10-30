class Solution {
public:
    // need to write predicate fn
    bool canKokoFinishBananasWithKSpeed(vector<int>&piles, int h, int k){
        long long totalHrsTakenByKokoToFinishAllBananasWithGivenK = 0;
        for(int i=0;i<piles.size();++i)
            totalHrsTakenByKokoToFinishAllBananasWithGivenK += ceil(piles[i] / (double)k);

        // if(totalHrsTakenByKokoToFinishAllBananasWithGivenK <= h)
        //     return true;
        // return false;
        return totalHrsTakenByKokoToFinishAllBananasWithGivenK <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        int e = *max_element(piles.begin(), piles.end());
        int ans = 0;

        // TC: O(Nlog(max(Piles)))
        while(s <= e){
            int mid = (s + e) >> 1;
            int k = mid;
            if(canKokoFinishBananasWithKSpeed(piles, h, k)){
                // koko will finish all bananas without being caught
                ans = k;
                e = mid - 1;
            }
            else
                s = mid + 1;
        }
        return ans;
    }
};