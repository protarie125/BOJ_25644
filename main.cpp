#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
vl A;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;

  A = vl(n);
  for (auto&& a : A) {
    cin >> a;
  }

  ll max_a = 0;
  ll ans = 0;
  for (auto i = n - 1; 0 <= i; --i) {
    if (max_a < A[i]) {
      max_a = A[i];
    }
    ans = max(ans, max_a - A[i]);
  }

  cout << ans;

  return 0;
}