/* SYou are given an array of elements. Now you need to choose the best index of this array. An index of the
array is called best if the special sum of this index is maximum across the special sum of all the other indices.
To calculate the special sum for any index you pick the first element that is and add it to your sum. Now you
pick next two elements i.e., and and add both of them to your sum. Now you will pick the next elements, and
this continues till the index for which it is possible to pick the elements. Find the best index and in the output
print its corresponding special sum. Note that there may be more than one best index, but you need to only
print the maximum special sum.*/


#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int index = i;
        int count = 1;

        while (index + count <= n)
        {
            for (int j = 0; j < count; j++)
            {
                sum += arr[index + j];
            }

            index = index + count;
            count++;
        }

        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }

    cout << "Maximum sum of special subsequence is: " << maxSum << endl;

    return 0;
}