CXX := riscv64-unknown-linux-gnu-g++
CXXFLAG := --static
SRCS := $(wildcard *.c)
PROGS := $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

%: %.c
	$(CXX) $(CXXFLAG)  -o $@ $<

clean:
	rm -r *.out
