#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
    {
        int mid=(high+low)/2;
        if(nums[mid]==target)
            return mid;
        if(nums[mid]<nums[0])
        {
            if(target>=nums[0]||target<nums[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        else
        {
            if(target>nums[mid]||target<nums[0])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    return -1;
	}
};
int main()
{
	Solution ob;
	int n,target;
	cout<<"enter no of elements";
	cin>>n;
	vector<int> nums;
	cout<<"enter elemnts";
	for(int i=0;i<n;i++)
	{
		int temp=0;
		cin>>temp;
		nums.push_back(temp);
	}
	cout<<"enter target";
	cin>>target;
	cout<<ob.search(nums,target);
}
