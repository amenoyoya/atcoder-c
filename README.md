# AtCoder競技プログラミング

AtCoder: https://atcoder.jp/

## What's this?

プログラミングの勉強用にAtCoder競技プログラミングに挑戦

ついでに、昔のC++しか知らないため、C++14などの最新C++プログラミングに再入門する

***

## Setup

### Environment
- OS:
    - Windows 10 Pro
- Editor:
    - VSCode: `1.36.0`
- Docker:
    - Docker for Windows
- Docker Containers:
    - app: FROM `alpine:8.3`
        - Gnu C++ Compiler: `9.1.0`
        - nodejs: `8.14.0`
        - yarn (package manager): `1.16.0`

---

### Setup
- Enable Hyper-V
    - Run PowerShell as Administrator
        ```powershell
        > Enable-WindowsOptionalFeature -Online -FeatureName Microsoft-Hyper-V -All
        ```
    - Restart Windows system
- Download **Docker for Windows** from: https://docs.docker.com/docker-for-windows/
    - Need to registrate
- Install Docker for Windows
- Prepare Docker container image: `alpine-node-gcc:9.1.0`
    - Run `cmd.exe`
        ```bash
        # Combine tar files
        > copy /b alpine-node-gcc.9.1.0_src\alpine-node-gcc.9.1.0.tar_* alpine-node-gcc.9.1.0.tar

        # Load Docker image
        > docker load < alpine-node-gcc.9.1.0.tar
        ```
- Build up Docker containers
    ```bash
    > docker-compose up
    ```

***

## Test run

### Create sample C++ program
- **app/00.APG4b/sample01.cpp**
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
    # Attach to Docker container: app
    $ docker-compose exec app ash

    # call package.json:scripts.build
    ## => node compile.js $1
    ## => gcc "$1.cpp" -lstdc++ -o "$1"
    % yarn build 00.APG4b/sample01
    ```
- Execute `sample01`
    ```bash
    # In Docker container: app

    # Execute
    % ./00.APG4b/sample01
    Hello, world!
    ```
