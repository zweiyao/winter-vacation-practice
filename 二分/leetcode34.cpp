#include<iostream>
#include<vector>
using namespace std;
class Solution {

public:
    int binarySearch_fir(vector<int> nums,int target)
    {
        int left=0,right=nums.size()-1;
        while(left<right)
        {
            int mid=left+(right-left)/2;//取小
            if(nums[mid]>=target)right=mid;
            else left=mid+1;
        }
        return left;
    }
    int binarySearch_last(vector<int> nums,int target)
    {
        int left=0,right=nums.size()-1;
        while(left<right)
        {
            int mid=left+(right-left+1)/2;//取大
            if(nums[mid]<=target)left=mid;
            else right=mid-1;
        }
        return left;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)return vector<int>{-1,-1};
        int first = binarySearch_fir(nums, target);
        int last = binarySearch_last(nums, target);
        vector<int> res;
        if (first <= last) {
            res.push_back(first);
            res.push_back(last);
        } else {
            res.push_back(-1);
            res.push_back(-1);
        }
        return res;
    }
};