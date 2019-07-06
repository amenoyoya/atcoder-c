/**
問題: 標準入力から2つの整数A, Bを受け取り A + B の計算結果を出力
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  // cin は (<空白> | <改行>) 区切りで複数の入力を受け取る
  cin >> A >> B;
  cout << (A + B) << endl;
}