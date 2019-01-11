---
### 1. CompileTest - c/c++编译学习


#### gxx 下为g++编译样例
#### makefile 下为makefile编译样例
#### cmake 下为cmake编译样例

---


* 常见问题总结

**问题：运行时，动态库找不到的解决办法有哪些？**
```
#运行时动态库路径设置
https://www.cnblogs.com/homejim/p/8004883.html
#1 动态库放在如下路径
/lib或/lib64
/usr/lib或/usr/lib64
#2 设置链接路径
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:《your_lib_path》
#3 修改配置文件/etc/ld.so.conf
/etc/ld.so.cache中缓存了动态库路径
#4 链接时加如下命令
-Wl,-rpath=《my_thirdparty_lib_path》
#5 软连接
#6 copy库到当前目录
```
### 2. 编译简单介绍 *进一步学习*
![](./doc/compile.png) 

### 3.参考资料

#### 官方参考资料
#### gcc 官网：https://gcc.gnu.org/onlinedocs/
#### makefile 官网：http://www.gnu.org/software/make/
#### cmake 官网：https://cmake.org/cmake-tutorial/

#### 其他参考资料
#### gcc编译图解：https://www.zhihu.com/question/43538570
#### makefile教程: https://blog.csdn.net/weixin_38391755/article/details/80380786
#### makefile常用命令: https://www.cnblogs.com/wang_yb/p/3990952.html
#### gcc常用命令: http://www.runoob.com/w3cnote/gcc-parameter-detail.html
#### cmake实战: http://www.hahack.com/codes/cmake/
#### 运行时，动态库路径设置：https://www.cnblogs.com/homejim/p/8004883.html
#### cmake链接库：https://blog.csdn.net/arackethis/article/details/43488177
#### 画图： https://blog.csdn.net/flushhip/article/details/53688622
#### gnu汇编官网：http://tigcc.ticalc.org/doc/gnuasm.html
#### AT&T汇编：https://www.jianshu.com/p/0480e431f1d7
#### AT&T汇编入门：https://blog.csdn.net/p8x8x8/article/details/6531472
#### 几种汇编语法释疑：https://blog.csdn.net/yazhouren/article/details/73692879
#### intel开发文档：https://software.intel.com/sites/default/files/managed/a4/60/325383-sdm-vol-2abcd.pdf

