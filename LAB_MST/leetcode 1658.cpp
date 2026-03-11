class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int left=0;
        int crrsum=0;
        int totalsum=0;
    
        for(int i=0;i<nums.size();i++){
            totalsum=totalsum+nums[i];
                    }
        int maxlen=-1;
        int target=totalsum-x;
        if(target<0) return -1;



        for(int right=0;right<nums.size();right++){
            crrsum=crrsum+nums[right];

        while(crrsum>target && left<=right){
            crrsum=crrsum-nums[left];
            left++; 
        }
        if (crrsum==target){
            maxlen=max(maxlen,right-left+1);
        }




        }
        if(maxlen==-1){return -1;}
        return nums.size()-maxlen;
    
    }
};




















