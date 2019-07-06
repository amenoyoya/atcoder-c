/**
問題: 以下を秒単位に変換
  - 1年
  - 2年
  - 5年
  - 10年
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  // 1年の秒数
  int seconds = 60 * 60 * 24 * 365;

  // 1年
  cout << seconds << endl;
  // 2年
  cout << (2 * seconds) << endl;
  // 5年
  cout << (5 * seconds) << endl;
  // 10年
  cout << (10 * seconds) << endl;
}