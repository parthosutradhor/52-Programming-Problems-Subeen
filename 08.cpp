#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T, x;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		vector<int> nums;
		for (int j = 0; j < 3; j++) {
			cin >> x;
			nums.push_back(x);
		}
		sort(nums.begin(), nums.end());
		printf("Case %d: %d %d %d\n", i, nums[0], nums[1], nums[2]);
	}
	return 0;
}