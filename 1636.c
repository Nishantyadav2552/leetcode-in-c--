#include <stdio.h>
int* frequencySort(int* nums, int numsSize, int* returnSize) {
    int arr[numsSize];
    for (int i = 0; i < numsSize; i++)
    {
        int freq =0;
        for (int j = 0; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                freq++;
            }
            
        }
        arr[i] = freq;
    }
    for (int i = 0; i < numsSize -1 ; i++)
    {
        for (int j = i+1; j < numsSize; j++)
        {
            if (arr[i]>arr[j] && nums[i] == nums[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    *returnSize = numsSize;
    return nums;
}
int main(){
    int arr[6] ={1,1,2,2,2,3};
    int returnSize;
    int* arr1 = frequencySort(arr,6,&returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    return 0;
}