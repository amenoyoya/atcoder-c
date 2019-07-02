# AtCoder競技プログラミング

AtCoder: https://atcoder.jp/

## What's this?

プログラミングの勉強用にAtCoder競技プログラミングに挑戦

ついでに、昔のC++しか知らないため、C++14などの最新C++プログラミングに再入門する

***

## Setup

### Environment
- OS: Windows 10
- Compiler: Gnu C++ Compiler `8.2.0` by MinGW

---

### Setup
- Download installer from https://jaist.dl.osdn.jp/mingw/68260/mingw-get-setup.exe
- Execute installer
    - [x] mingw32-base
    - [x] mingw32-gcc-g++
    - => Toolbar > Installation > Apply Changes
- Set environmental variable `PATH`
    - `Win + Pause/Break` => システム > システムの詳細設定 > 環境変数
        - e.g. `C:\MinGW\bin`

***

## Test run

### Create sample C++ program
- **00.APG4b/sample01.cpp**
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        cout << "Hello, world!" << endl;
        return 0;
    }
    ```
- Compile `sample01.cpp`
    ```bash
    $ cd 00.APG4b
    $ gcc sample01.cpp -lstdc++ -o sample01.exe
    ```
- Execute `sample01.exe`
    ```bash
    $ ./sample01
    Hello, world!
    ```
