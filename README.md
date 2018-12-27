# c/c++编译学习

## 1. g++编译过程


## 2.1 g++ 入门

### 常用编译命令总结


```
静态库封装命令：
g++ -c dynamic_a.cpp dynamic_b.cpp dynamic_c.cpp
ar cr libstatic.a dynamic_a.o dynamic_b.o dynamic_c.o
```

```
链接静态库命令：
g++ main.cpp -L. -lstatic -static -o main
```

```
动态库封装命令：
g++ dynamic_a.cpp dynamic_b.cpp dynamic_c.cpp -fPIC -shared -o libdynamic.so
```
```
链接动态库命令：
g++ main.cpp -L. -ldynamic -o main
```

> 以上链接方式在运行时，需要在 .bashrc 中指定库目录，否则会找不到库
> 如果不想在.bashrc 中指定库目录，链接时请加上 -Wl,rpath=$lib_path，例-动态链接可改写为：

```
动态库封装命令：
g++ dynamic_a.cpp dynamic_b.cpp dynamic_c.cpp -fPIC -shared -o libdynamic.so -Wl,rpath=./lib/
```
> -ps: lib_path指的是库路径，可以绝对路径，也可以相对路径，

