class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> a;
        int n = numbers.size();
        int i = 0;
        int j = n - 1;

        while(i <= j){
            if(numbers[i] + numbers[j] > target)
                j--;
            if(numbers[i] + numbers[j] < target)
                i++;
            if(numbers[i] + numbers[j] == target){
                a.push_back(i + 1);
                a.push_back(j + 1);
                break;
            }
        }

        return a;
    }
};
