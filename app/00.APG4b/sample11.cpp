/* 
  問題:
    - H×Wのマス目が与えられる
    - 入力において、全てのマスは文字で表されており、'o'は空きマス、'x'は爆弾マスに対応する
    - マス目は H個の文字列 S_1...S_H で表現される
    - 文字列 S_iの j文字目は、マス目の上から i番目、左から j番目のマスに対応
    - 各空きマスに対応する'o'を、その空きマスの周囲8方向に隣接するマスにおける爆弾マス'x'の個数を表す数字で置き換える
    - 上記規則で置き換えられた後のマス目を出力
  入力:
    ```
    <H> <W>
    <S_1> # 1行目のマスを表す文字列（文字数: W）
     :    # H回繰り返し
    <S_H> # H行目のマスを表す文字列（文字数: W）
    ```
  例:
    - 入力:
      ```
      3 5
      ooooo
      oxoxo
      ooooo
      ```
    - 出力:
      ```
      11211
      1x2x1
      11211
      ```
 */
#include <bits/stdc++.h>
using namespace std;

/*
  設計: 2次元データを1次元に変換
    - 入力:
      ```
      3 5
      ooooo
      oxoxo
      ooooo
      ```
    - 変換:
      ```
      index:  0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
      string: o o o o o o x o x o o  o  o  o  o
      ```
    - 周辺8方向:
      - 左: index - 1 (>= 0 && index%W != 0)
      - 右: index + 1 (< H*W && index%W != W-1)
      - 上: index - W (>= 0 && index >= W)
      - 下: index + W (< H*W && index < W*(H-1))
      - 左上: index - W - 1 (>= 0 && index%W != 0 && index >= W)
      - 右上: index - W + 1 (>= 0 && index%W != W-1 && index >= W)
      - 左下: index + W - 1 (< H*W && index%W != 0 && index < W*(H-1))
      - 右下: index + W + 1 (< H*W && index%W != W-1 && index < W*(H-1))
 */

// index番目の文字の周辺8文字にある'x'の数を数える関数
int countBomb(const string &map, int index, int H, int W) {
  int i, count = 0;
  // 左のマス: (存在する AND 右端ではない) ならそのマスを見る
  i = index - 1;
  if (i >= 0 && i % W != W - 1 && map.at(i) == 'x') count++;
  // 右のマス: (存在する AND 左端ではない) ならそのマスを見る
  i = index + 1;
  if (i < H*W && i % W != 0 && map.at(i) == 'x') count++;
  // 上のマス: (存在する) ならそのマスを見る
  i = index - W;
  if (i >= 0 && map.at(i) == 'x') count++;
  // 下のマス: (存在する) ならそのマスを見る
  i = index + W;
  if (i < H*W && map.at(i) == 'x') count++;
  // 左上のマス: (存在する AND 右端ではない) ならそのマスを見る
  i = index - W - 1;
  if (i >= 0 && i % W != W - 1 && map.at(i) == 'x') count++;
  // 左下のマス: (存在する AND 右端ではない) ならそのマスを見る
  i = index + W - 1;
  if (i < H*W && i % W != W - 1 && map.at(i) == 'x') count++;
  // 右上のマス: (存在する AND 左端ではない) ならそのマスを見る
  i = index - W + 1;
  if (i >= 0 && i % W != 0 && map.at(i) == 'x') count++;
  // 左下のマス: (存在する AND 左端ではない) ならそのマスを見る
  i = index + W + 1;
  if (i < H*W && i % W != 0 && map.at(i) == 'x') count++;
  return count;
}

int main() {
  int H, W;
  string map;
  // 入力 => 2次元のマス目 => 1次元の文字列に変換
  cin >> H >> W;
  for (int i = 0; i < H; ++i) {
    string line;
    cin >> line;
    map += line;
  }
  // 出力
  // 各マス（文字）について周辺8マスの爆弾の数を数える
  for (int i = 0; i < H * W; ++i) {
    if (map.at(i) == 'x') {
      // 自身が爆弾ならそのまま出力
      cout << 'x';
    } else{
      // 周辺8マスの爆弾の数を出力
      cout << countBomb(map, i, H, W);
    }
    // 右端になったら（i % W == W - 1）改行
    if (i % W == W - 1) {
      cout << endl;
    }
  }
}