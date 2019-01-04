```
要求：
1）将ProgressBar.cpp生成.o文件
2）将Drawing.cpp封装成动态库
3）链接1）和2）生成可执行文件main
```

```
#参考答案
LIBS = -L./lib -lDrawing

INCLUDEDIR = -I./include/
LDFLAGS = -Wl,-rpath=./lib/

OBJDIR = src
TESTDIR = test
BINDIR = bin
LIBDIR = lib


TARGET = $(addprefix $(BINDIR)/, main)

COREOBJ = \
		ProgressBar.o
OBJ1 = $(addprefix $(OBJDIR)/, $(COREOBJ))

all: $(TARGET)
	@echo "--end-makefile--"

$(TARGET) : $(OBJ1) $(TESTDIR)/main.cpp
	mkdir -p ./bin
	$(CXX) $^ -o $@ $(LIBS) $(INCLUDEDIR) $(LDFLAGS)

$(OBJDIR)/%.o:%.cpp
	$(CXX) $^ -o $@ 

clean:
	rm -rf ./bin
	rm -rf ./src/*.o
```
