#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slowIndex = 0;
        for(int fastIndex =0; fastIndex < nums.size(); fastIndex++) {
            if(val != nums[fastIndex]) {
                nums[slowIndex++] = nums[fastIndex];
            }
        }
        cout<<"nihao"<<endl;
        return slowIndex + 1;
    }
};

int main()
{
    vector<int> a = {
        1,4,4,8
    };
}





