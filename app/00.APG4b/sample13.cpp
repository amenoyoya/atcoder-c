/*
  問題:
    - 整数 A, B, C を標準入力から受け取り、最大値と最小値の差を出力
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> values(3);
  cin >> values.at(0) >> values.at(1) >> values.at(2);
  // sortメソッドにより小さい順に並べることができる
  // => .at(0) が最小値, .at(2) が最大値
  sort(values.begin(), values.end());
  cout << (values.at(2) - values.at(0)) << endl;
}