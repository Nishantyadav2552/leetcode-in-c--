#include <iostream>
using namespace std;
class Solution {
public:
    int sumBase(int n, int k) {
        int val = 0;
        while (n>0)
        {
            val = val + (n%k);
            n = n/k;
        }
        return val;
    }
};
int main(){
    Solution solution;
    int result = solution.sumBase(34,6);
    cout << result << endl;
    return 0;
}