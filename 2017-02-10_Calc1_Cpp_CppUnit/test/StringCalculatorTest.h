#ifndef STRING_CALCULATOR_TEST__H
#define STRING_CALCULATOR_TEST__H

#include <cppunit/TestFixture.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TestSuite.h>

#include "../StringCalculator.h"

class CStringCalculatorTest: public CppUnit::TestFixture  {

public:

    void Should_Return_0_on_Empty_String()
    {
        CStringCalculator calc;
        CPPUNIT_ASSERT_EQUAL(0, calc.AddString(""));
    }

    void Should_Return_0_on_0()
    {
        CStringCalculator calc;
        CPPUNIT_ASSERT_EQUAL(0, calc.AddString("0"));
    }

    void Should_Return_100_on_100()
    {
        CStringCalculator calc;
        CPPUNIT_ASSERT_EQUAL(100, calc.AddString("100"));
    }

public:

    static CppUnit::Test *suite()
    {
        CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "CStringCalculatorTest" );
        
        suiteOfTests->addTest( new CppUnit::TestCaller<CStringCalculatorTest>( 
            "Should_Return_0_on_Empty_String", 
            &CStringCalculatorTest::Should_Return_0_on_Empty_String ) );

        suiteOfTests->addTest( new CppUnit::TestCaller<CStringCalculatorTest>( 
            "Should_Return_0_on_0", 
            &CStringCalculatorTest::Should_Return_0_on_0 ) );

        suiteOfTests->addTest( new CppUnit::TestCaller<CStringCalculatorTest>( 
            "Should_Return_100_on_100", 
            &CStringCalculatorTest::Should_Return_100_on_100 ) );

        return suiteOfTests;
    }

};


#endif  // STRING_CALCULATOR_TEST__H
