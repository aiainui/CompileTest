LIBS = -L./lib
INCLUDEDIR = -I./include

LDFLAGS = -Wl,-rpath=./lib/

GCC = g++

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
	$(GCC) -o $@ $^ $(LIBS) $(INCLUDEDIR) $(LDFLAGS)

$(OBJDIR)/%.o : %.cpp
	$(GCC) -c $< -o $@ $(INCLUDEDIR)

clean:
	rm -rf ./bin
	rm $(OBJDIR)/*.o
