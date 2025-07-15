#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height)
{
    int left = 0;                  // pointer from the left side
    int right = height.size() - 1; // pointer from the right side
    int maxWater = 0;              // to keep track of the maximum water

    while (left < right)
    {
        // height is limited by the shorter line
        int h = min(height[left], height[right]);
        // width is the distance between the lines
        int w = right - left;
        // calculate current area
        int currentArea = h * w;

        // update maxWater if current area is bigger
        if (currentArea > maxWater)
        {
            maxWater = currentArea;
        }

        // move the pointer which has the shorter line
        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return maxWater;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Max water the container can store: " << maxArea(height) << endl;
    return 0;
}
