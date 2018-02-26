#include <iostream>
#include <functional>
#include <vector>
#include <queue>
#include <fstream>
#include <string>
#include <bitset>
#include <sstream>
#include <climits>
#include <cmath>
#include <map>
#include <utility>
#include <stdint.h>
#include <algorithm>
#include <stack>
#include <set>
using namespace std;

class Solution {
public:
	string reverseStr(string s, int k) {
		string tmp = s;
		for (int i = 0; i < tmp.length(); i += 2*k) {
			reverse(tmp.begin()+i, ((tmp.length() < i+k) ? tmp.end() : tmp.begin() +i+ k));
		}		
		return tmp;
	}
};