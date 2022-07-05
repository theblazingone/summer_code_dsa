class Soultion{
public:

    bool SumOfDigits(vector <int> nums){

        sort(nums.begin(), nums.end());

        int sum = 0;
        while(nums[0]){

            sum += nums[0] % 10;
            nums[0] /= 10;
        }

        if (sum % 2 == 0){
            return 1;
        }

        return 0;
    }
};