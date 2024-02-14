FLAGS = -std=c++11

ifdef USE_FLOAT
    FLAGS += -D USE_FLOAT
endif

all: main.cpp
	g++ $(FLAGS) -o task1 main.cpp -lm

clean:
	rm -f task1

# Float: make USE_FLOAT=1 && ./task1 && make clean
# Double: make && ./task1 && make clean
