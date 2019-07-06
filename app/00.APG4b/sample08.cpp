/*
  問題: 整数 x, a, b が入力される => 以下の4つの値を計算し、1行ずつ出力
    1. xに1を足した値
    2. (1.で出力した値)に(a+b)を掛けた値
    3. (2.で出力した値)に(2.で出力した値)を掛けた値
    4. (3.で出力した値)から1を引いた値
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;
  
  // 1.
  // ++x で x = x + 1 を実行した後の x の値が返る
  // x++ は x の値を返した後 x = x + 1 を実行
  cout << ++x << endl;

  // 2.
  // x * (a + b) の計算結果を x に代入した後 x を表示
  cout << (x *= (a + b)) << endl;

  // 3.
  cout << (x *= x) << endl;

  // 4.
  cout << --x << endl;
}