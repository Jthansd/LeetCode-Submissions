using namespace std;
#include <vector>
#include <algorithm>
#include <string>
class Solution {
public:
    int minDeletion(string s, int k) {
        vector<int> freq(26, 0);
        int unique = 0, count = 0;
        for(char l : s){
            freq[l - 'a']++;
            unique++;
        }
        sort(freq.begin(), freq.end());

        for(int i = 26 - unique; i < 26 - k; i++){
            count += freq[i];
        }
        

        return count;
    }
};