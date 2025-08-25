#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:

    void rotate(vector<int> &nums, int k){
        vector<int> temp(nums.size());

        for(int i=0; i<nums.size(); i++){
            temp[(i+k) % nums.size()] = nums[i];
        }
        nums = temp;
        cout << "\nVector elements are after rotation: ";
        for (auto it = nums.begin(); it != nums.end(); it++)
           cout << *it << " ";
    }
};

int main(){
    solution sv;
    vector<int> nums;
    for (int i = 1; i <= 5; i++)
      nums.push_back(i);
    cout << "\nVector elements are before rotation: ";
    for (auto it = nums.begin(); it != nums.end(); it++)
       cout << *it << " ";
    int k = 3;
    sv.rotate(nums, k);
}