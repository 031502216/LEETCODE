#include<iostream>
using namespace std;

//思路：两个相同的数异或为0
//例子:1^2^3^4^4^3^2 = 2^2^3^3^4^4^1 = 1

class Solution {
public:
    int singleNumber(int A[], int n) {
    	int flag=0;
        for(int i=0; i<n; i++){
        	flag ^= A[i];
		}
		return flag;
    }
};

int main(){
	int N=9^5;
	cout<<N<<endl;
	return 0;
}
