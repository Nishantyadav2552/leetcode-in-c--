#include <iostream>
#include <vector>
#define MAX 100
using namespace std;
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        for (int i = left; i <=right; i++)
        {
            int issdn = 1;
            int n = i;
            while (n>0)
            {
                int val = n%10;
                if(val == 0){
                    issdn = 0;
                    break;
                }
                if (i%val!=0)
                {
                    issdn = 0;
                    break;
                }
                n = n/10;
            }
            if (issdn)
            {
                arr.push_back(i);
            }
            
        }
        return arr;
    }
};
int main(){

}