# ue4 doc

## get start

### 可执行文件
```bash
[LauncherInstall][VersionNumber]\Engine\Binaries\Win64\UE4Editor.exe "[ProjectPath][ProjectName].uproject" -game
```

### 实用游戏命令
运行游戏时，有众多 主机命令 可用于游戏控制台中 。按 ~（波浪符） 或 Tab 键可打开控制台。下方列出了部分实用命令。

EXIT/QUIT

DISCONNECT

OPEN [MapURL]

TRAVEL [MapURL]

VIEWMODE [Mode]

### 启动时加载地图
以下命令行可用于加载运行 ExampleMap 地图的引擎：
```
UE4Editor.exe "[ProjectPath][ProjectName].uproject" ExampleMap -game
```

### 术语
Object 对象\
在虚幻引擎中，最基础的构建单元叫做 Object，它包含了很多游戏资源必需的 幕后 功能。虚幻引擎4中几乎所有的东西都是继承自Object（或从中获取部分功能）。在C++中，UObject 是所有Object的基类，实现了诸如垃圾回收、开放变量给编辑器的元数据（UProperty），以及存盘和读盘时的序列化功能。