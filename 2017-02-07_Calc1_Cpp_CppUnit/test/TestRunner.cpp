#include <cppunit/ui/text/TestRunner.h>
#include "StringCalculatorTest.h"

int main(int argc, char *argv[])
{
    CppUnit::TextUi::TestRunner runner;
    runner.addTest( StringCalculatorTest::suite() );
    runner.run();
    return 0;
}