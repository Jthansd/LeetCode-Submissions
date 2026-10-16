bool judgeSquareSum(int c) {
        unordered_set<long long> squares;
        for(long long i = 0; i * i <= c; i++){
            squares.insert(i * i);
        }
        for(long long square : squares){
            if(squares.count(c - square)){
                return true;
            }
        }
        return false;
    }