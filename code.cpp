/*****************************************************************************************
//C++
/*用两个指针从两端向中间逼近
如果两数之和等于所要找的数，输出并跳出循环，因为先找到的两数之积一定小于后找到的两数之积（1，2，3，4，5，6）找9，3*6小于4*5；
如果两数之和大于所要找的数，右边指针向左移； 如果两数之和小于所要找的数，左边指针向右移；
左右指针相逢时结束查找。 */
*****************************************************************************************/
class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) 
    {
    	int length = array.size();
        vector<int> ret;
        if(length == 0)
            return ret;
        int i = 0;
        int j = length - 1;
        while(i < j)
        {
            int asum = array[i]+array[j];
            if(asum == sum)
            {
                ret.push_back(array[i]);
                ret.push_back(array[j]);
                break;
            }
            else if(asum < sum)
                i++;
            else
				j--;
        }
        return ret;
    }
};
