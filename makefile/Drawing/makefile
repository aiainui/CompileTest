LIBS =
CPPFLAGS = -Wall -Winline -pipe -ffast-math -D_LINUX_64_ 

LDFLAGS = -I. -I./include/  -L./lib/
LDFLAGS+= -Wl,-rpath=./lib/

GCC = g++ -std=c++11  -O2

OBJDIR = src
TESTDIR = test
BINDIR = bin


TARGET1 = $(addprefix $(BINDIR)/, test_draw)

COREOBJ = \
		Drawing.o \

OBJ1 = $(addprefix $(OBJDIR)/, $(COREOBJ))
OBJ1 += $(addprefix $(TESTDIR)/, main.cpp)

all: $(TARGET1)
	@echo "--end-makefile--"

$(TARGET1) : $(OBJ1)
	mkdir -p ./bin
	$(GCC) -o $@ $^ $(LIBS) $(LDFLAGS)

$(OBJDIR)/%.o : %.cpp
	$(GCC) $(CPPFLAGS) -c $< -o $@ $(LDFLAGS)

clean:
	rm -rf ./bin
	rm $(OBJDIR)/*.o
