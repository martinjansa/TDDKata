#ifndef STRING_CALCULATOR_TEST__H
#define STRING_CALCULATOR_TEST__H

#include <cppunit/TestFixture.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TestSuite.h>

#include "../StringCalculator.h"

class CStringCalculatorTest: public CppUnit::TestFixture  {

public:

    void Should_Return_0_on_Empty()
    {
        CStringCalculator calc;
        CPPUNIT_ASSERT_EQUAL(0, calc.AddString(""));
    }

public:

    static CppUnit::Test *suite()
    {
        CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "CStringCalculatorTest" );
        
        suiteOfTests->addTest( new CppUnit::TestCaller<CStringCalculatorTest>( 
            "Should_Return_0_on_Empty", 
            &CStringCalculatorTest::Should_Return_0_on_Empty ) );

        return suiteOfTests;
    }

};


#endif  // STRING_CALCULATOR_TEST__H
