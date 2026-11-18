using namespace std;
#include <vector>
#include <algorithm>
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> answer;
        sort(nums.begin(), nums.end());

        for(int query : queries){
            int i = 0, sum = 0, count = 0;
            while (i < nums.size() && nums[i] + sum <= query) {
                sum += nums[i];
                count++;
                i++;
            }
            answer.push_back(count);
        }

        return answer;
    }
};