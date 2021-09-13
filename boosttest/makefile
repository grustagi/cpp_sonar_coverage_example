all: clean main test coverage sonar

clean: 
	rm -rf main *.gcno *gcda *gcov

main: greatest.cpp main_test.cpp
	build-wrapper-linux-x86-64 --out-dir bw-output g++ -o main greatest.cpp main_test.cpp \
	-fprofile-arcs -ftest-coverage \
	-I/usr/include -L/usr/lib/x86_64-linux-gnu/ \
	-lboost_unit_test_framework -lpthread
	chmod +x main

test:
	./main --logger=JUNIT,message,test_report.xml

coverage:
	gcov greatest.cpp

sonar: 
	sonar-scanner -Dsonar.branch.name=feature -Dsonar.branch.target=release
