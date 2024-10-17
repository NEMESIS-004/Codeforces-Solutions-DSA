#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  int n; cin >> n;
  for (int i = 0; i <= n; i++) {
    int four_cnt = i;
    int rem = n - 4 * four_cnt;
    if (rem < 0 || rem % 7 != 0) continue;
    int seven_cnt = rem / 7;
    while (four_cnt--) cout << 4;
    while (seven_cnt--) cout << 7;
    return 0;
  }
  cout << -1 << '\n';
  return 0;
}