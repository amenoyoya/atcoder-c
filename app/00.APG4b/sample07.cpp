/**
  問題: 以下の2パターンの入力に対して、たこ焼きの情報を処理するプログラムを実装
  パターン1:
    - 入力:
      ```
      1
      <price>
      <N>
      ```
      - 1行目で、パターンを表す整数1が入力される
      - 2行目で、たこ焼き1個あたりの値段が入力される
      - 3行目で、たこ焼き1セットあたりの個数が入力される
    - 出力:
      ```
      <<N> * <price>>
      ```
      - たこ焼き1セットあたりの値段を出力
    パターン2:
      - 入力:
        ```
        2
        <text>
        <price>
        <N>
        ```
        - 1行目で、パターンを表す整数2が入力される
        - 2行目で、たこ焼きセットの説明文が入力される
        - 3行目で、たこ焼き1個あたりの値段が入力される
        - 4行目で、たこ焼き1セットあたりの個数が入力される
      - 出力:
        ```
        <text>!
        <<N> * <price>>
        ```
        - 1行目で、たこ焼きセットの説明文の末尾に'!'をつけて出力
        - 2行目で、たこ焼き1セット辺りの値段を出力
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;
  if (p == 1) {
    int price, N;
    cin >> price;
    cin >> N;
    cout << (price * N) << endl;
    return 0;
  }
  if (p == 2) {
    string text;
    int price, N;
    cin >> text;
    cin >> price;
    cin >> N;
    cout << text + "!" << endl;
    cout << (price * N) << endl;
    return 0;
  }
}