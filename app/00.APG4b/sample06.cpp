/**
  問題: 標準入力から与えられる1行の計算式を計算し、その結果を出力
  与えられる計算式のパターンと対応する出力は以下の表の通り

  | input | output  |
  | A + B | A + B   |
  | A - B | A - B   |
  | A * B | A * B   |
  | A / B | A / B   | ※小数点以下切り捨て, B=0なら"error"
  | A ? B | "error" |
  | A = B | "error" |
  | A ! B | "error" |
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  string op;

  // <整数> <演算子> <整数> の形式で受け取る
  cin >> A >> op >> B;
  // 演算子ごとに条件分岐
  if (op == "+") {
    cout << A + B << endl;
  } else if (op == "-") {
    cout << A - B << endl;
  } else if (op == "*") {
    cout << A * B << endl;
  } else if (op == "/") {
    if (B == 0) {
      cout << "error" << endl;
    } else {
      cout << A / B << endl;
    }
  } else if (op == "?") {
    cout << "error" << endl;
  } else if (op == "=") {
    cout << "error" << endl;
  } else if (op == "!") {
    cout << "error" << endl;
  }
}
