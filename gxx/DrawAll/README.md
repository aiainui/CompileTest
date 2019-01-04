```
要求：
1）将ProgressBar.cpp生成.o文件
2）将Drawing.cpp封装成动态库
3）链接1）和2）生成可执行文件main
```

```
#参考答案
g++ -c src/ProgressBar.cpp -o src/ProgressBar.o
g++ src/Drawing.cpp -fPIC -shared -o lib/libDrawing.so -Iinclude
g++ -o main -L./lib -I./include -lDrawing src/ProgressBar.o test/main.cpp -Wl,-rpath=./lib/

```
