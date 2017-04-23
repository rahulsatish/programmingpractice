class Solution {
public:
	int findPoisonedDuration(vector<int>& timeSeries, int duration) {
		map<int, bool> mp;
		int count = 0;
		int marker = -9;
		for (int i = 0; i<timeSeries.size(); i++)
		{
			int start = timeSeries[i];
			int value = start + duration - 1;
			if (start>marker)
			{
				count += (value - start) + 1;
				marker = value;
			}
			else
			{
				count += (value - marker);
				marker = value;
			}
		}
		return count;
	}
};