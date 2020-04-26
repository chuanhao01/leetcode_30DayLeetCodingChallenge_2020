class Solution {
public:
    // using hashmap to store counts, then return num with counts 1
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> counts;
        for(int i: nums){
            if(counts.count(i) == 1){
                counts[i]++;
            }
            else{
                counts[i] = 1;
            }
        }
        for(pair<int, int> i: counts){
            if(i.second == 1){
                return i.first;
            }
        }
        return -1;
    }
};
