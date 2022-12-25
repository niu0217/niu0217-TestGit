#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;//左闭右闭区间
        int middle = 0;
        while(left <= right){
            middle = left + (right - left)/2;
            if(nums[middle] > target) {
                right = middle -1;
            }
            else if(nums[middle] < target) {
                left = middle + 1;
            }
            else {
                return middle;
            }
        }
        return -1;
    }
};

int main()
{
    Solution slu;
    vector<int> a = {
        1,4,4,8
    };
    cout<<slu.removeElement(a,4)<<endl;
}





