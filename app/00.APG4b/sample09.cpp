/*
  問題: AさんとBさんのテストの点数 A, B を標準入力から受けとる
    => 2人の点数を表す横向きの棒グラフ']'を出力
  例:
    - 入力:
      ```
      5 9
      ```
    - 出力:
      ```
      A:]]]]]
      B:]]]]]]]]]
      ```
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  // 'A:'出力(改行なし)
  cout << "A:";
  // i <- 0..A-1 繰り返し "]"出力(改行なし)
  int i = 0;
  while (i < A) {
    cout << "]";
    i++;
  }
  // 改行
  cout << endl;
  // Bについても同様
  cout << "B:";
  // 指定回数繰り返しはfor式でも可能
  for(i = 0; i < B; i++) {
    cout << "]";
  }
  cout << endl;
}