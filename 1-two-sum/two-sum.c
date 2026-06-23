/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

typedef struct
{
    int key;
    int value;
} Hash;

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = malloc(sizeof(int)*2);
    *returnSize = 2;

    Hash* map = malloc(sizeof(Hash)*numsSize); // numSize가 동적이기 떄문에 동적배열 malloc으로 지정
    int mapSize = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int need = target - nums[i];

        for(int j = 0; j < mapSize; j++)
        {
            if(map[j].key == need)
            {
                result[0] = map[j].value;
                result[1] = i;
                return result;
            }
        }

        map[mapSize].key = nums[i] ;
        map[mapSize].value = i;
        mapSize++;
    }

    return 0;
}