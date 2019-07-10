#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"

// https://leetcode.com/problems/height-checker/

// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> s(heights);
        sort(s.begin(), s.end());
        int count = 0;
        for (int i = 0; i < heights.size(); ++i) {
            if (heights[i] != s[i])
                ++count;
        }
        return count;
    }
};

void test1() {
    vector<int> v1{1,1,4,2,1,3};

    cout << "3 ? " << Solution().heightChecker(v1) << endl;
}

void test2() {

}

void test3() {

}