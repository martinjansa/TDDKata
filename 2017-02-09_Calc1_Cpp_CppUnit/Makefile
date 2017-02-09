CC=g++
CFLAGS= -Wall -pedantic
LINKFLAGS=
LINKFLAGS_TEST_RUNNER= -lcppunit

all:	Calc test

test:	TestRunner
	./TestRunner.exe

Calc:	Calc.cpp StringCalculator.cpp StringCalculator.h
	$(CC) Calc.cpp StringCalculator.cpp $(CFLAGS) $(LINKFLAGS) -o $@

TestRunner:	test/TestRunner.cpp test/StringCalculatorTest.h StringCalculator.cpp StringCalculator.h
	$(CC) test/TestRunner.cpp StringCalculator.cpp $(CFLAGS) $(LINKFLAGS_TEST_RUNNER) -o $@

clean:
	rm -f TestRunner.exe Calc.exe
