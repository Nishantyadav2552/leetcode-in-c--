#include <iostream>
using namespace std;
class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int maxsum = 0;
        for (int i = lowLimit; i <=highLimit; i++)
        {
            int n  = i;
            int sum = 0;
            while (n>0)
            {
                sum += (n%10);
                n /= 10;
            }
            if (maxsum < sum)
            {
                maxsum = sum;
            }
        }

        int arr[maxsum] = {0};
        for (int i = lowLimit; i <=highLimit; i++)
        {
            int n  = i;
            int sum = 0;
            while (n>0)
            {
                sum += (n%10);
                n /= 10;
                
            }
            arr[sum-1]++;
        }
        int result = 0;
        for (int i = 0; i < maxsum; i++)
        {   
            if (result < arr[i])
            {
                result = arr[i];
            }
            
        }
        return result;
    }
};
int main(){
    Solution solution;
    int result = solution.countBalls(19,28);
    cout << result << endl;
}