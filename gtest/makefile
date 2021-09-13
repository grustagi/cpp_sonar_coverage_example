all: clean main test coverage

main: main_test.cpp
	g++ -o main main_test.cpp -fprofile-arcs -ftest-coverage -I/usr/local/include -L/usr/local/lib -lgtest -lpthread
	chmod +x main

coverage:
	gcov main_test.cpp

sonar:
	sonar-scanner
	
test:
	./main

clean: 
	rm -rf main *.gcno *gcda *gcov
