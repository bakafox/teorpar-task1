FLAGS = -std=c++11

ifdef USE_FLOAT
    FLAGS += -DUSE_FLOAT
endif

all: main.cpp
	g++ $(FLAGS) -o task1 main.cpp -lm

clean:
	rm -f task1

# Float: make USE_FLOAT=1 && ./test && make clean
# Double: make && ./test && make clean
