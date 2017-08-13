class Solution {
public:
    int hammingDistance(int x, int y) {
		int num = 0;
		for (int i = 0; i < 32; i++)
			{
				int val = 1 << i;
				if (val > x && val > y) {
					break;
				}
  				if ((x & val) != (y & val)) {
					num++;
				}
			}
		return num;
		}
};