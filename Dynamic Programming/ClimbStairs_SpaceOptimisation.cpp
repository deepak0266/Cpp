#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        if(n==0||n==1)
            return 1;
        int prev=1, curr=1;
        for(int i=2;i<=n;i++)
        {
            int temp=prev+curr;
             prev=curr;
             curr=temp;
        }
        return curr;
    }
};

int main()
{
    Solution sol;
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    cout << "Number of ways to climb stairs: " << sol.climbStairs(n) << endl;
    return 0;
}
