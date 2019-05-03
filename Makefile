all: fibonacci.cpp fibonacci_advanced.cpp
	g++ fibonacci_advanced.cpp -o fibonacci_advanced
	g++ fibonacci.cpp -o fibonacci
clean:
	rm fibonacci_advanced
	rm fibonacci
