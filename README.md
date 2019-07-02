# AtCoder競技プログラミング

AtCoder: https://atcoder.jp/

## What's this?

プログラミングの勉強用にAtCoder競技プログラミングに挑戦

ついでに、昔のC++しか知らないため、C++14などの最新C++プログラミングに再入門する

***

## Setup

### Environment
- OS:
    - Windows 10
- Editor:
    - VSCode: `1.35.1`
- Terminal:
    - Bash (by Git for Windows)
- CLI:
    - nodejs: `10.15.3`
    - yarn (package manager): `1.15.2`
- Compiler:
    - Gnu C++ Compiler (by MinGW): `8.2.0`

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
- **compile.js** (for launching gcc compiler)
    ```javascript
    const exec = require('child_process').execSync;
    
    (() => {
      if (process.argv.length-2 === 0) {
        console.log('Please set compiling target');
        return 0;
      }
      const res = exec('gcc "' + process.argv[2] + '.cpp" -lstdc++ -o "' + process.argv[2] + '.exe"');
      console.log(res.toString());
    })();
    ```
- **package.json** (for npm script)
    ```json
    {
        "scripts": {
            "build": "node compile.js"
        }
    }
    ```

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
    # call package.json:scripts.build
    ## => node compile.js $1
    ## => gcc "$1.cpp" -lstdc++ -o "$1.exe"
    $ yarn build 00.APG4b/sample01
    ```
- Execute `sample01.exe`
    ```bash
    $ ./00.APG4b/sample01
    Hello, world!
    ```
