class Solution {
  public:
    int findPosition(int N , int M , int K) {
        if(K>N)
            K%= N;
        if(M>N)
            M%= N;
            
        int pos= K+M-1;
        if(pos>N)
            pos= pos%N;
        
        return pos;
    }
};