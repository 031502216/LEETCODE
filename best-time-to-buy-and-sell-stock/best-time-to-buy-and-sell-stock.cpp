#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if(prices.size() < 2)
			return 0;
		int minPrice = prices[0];
		int profit = 0;
		for(int i=0; i<prices.size(); i++){
			if(minPrice > prices[i])
				minPrice = prices[i];
			profit = max(profit, prices[i]-minPrice);
		}
		return profit;
    }
};

int main(){
	return 0;
}
