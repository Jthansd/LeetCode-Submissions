using namespace std;
#include <string>;

class Solution {
public:
    int minTimeToType(string word) {
        int time = 0;
        char pointer = 'a';
        for(char c : word){

            int pointer_val, letter_val; 
            pointer_val = pointer - 'a';
            letter_val = c - 'a'; 

            int diff = abs(pointer_val - letter_val);
            if(diff > 13){
                time = time + (26 - diff) + 1;
            }
            else{
                time = time + diff + 1; 
            }
            pointer = c;
        }
        return time;
    }
};