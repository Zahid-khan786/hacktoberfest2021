//Name: Zahid Khan
//Language: C++

class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) { 
      vector<int> ans;
        vector<int>temp = nums;
      int s = 0;
      int e = nums.size()-1;
      int ans_s =0;
      int ans_e=0;
       sort(nums.begin(),nums.end());
        for(int i = 0; i<nums.size(); i++){ 
          if(abs(nums[s]) + abs(nums[e]) == abs(target)){
                ans_s = s;
                ans_e= e;
              
            }
          else if(abs(nums[s]) + abs(nums[e]) > abs(target) ){
                 e--;
             }
  else if(abs(nums[s]) + abs(nums[e]) < abs(target) ){
              s++;
      }
        }
ans.push_back(ans_s);
ans.push_back(ans_e);
return ans;
}
 
};
