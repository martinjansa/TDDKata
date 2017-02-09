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

    void Should_Return_1_on_1()
    {
        CStringCalculator calc;
        CPPUNIT_ASSERT_EQUAL(1, calc.AddString("1"));
    }

    void Should_Return_2_on_1_and_1()
    {
        CStringCalculator calc;
        CPPUNIT_ASSERT_EQUAL(2, calc.AddString("1,1"));
    }

public:

    static CppUnit::Test *suite()
    {
        CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "CStringCalculatorTest" );
        
        suiteOfTests->addTest( new CppUnit::TestCaller<CStringCalculatorTest>( 
            "Should_Return_0_on_Empty", 
            &CStringCalculatorTest::Should_Return_0_on_Empty ) );

        suiteOfTests->addTest( new CppUnit::TestCaller<CStringCalculatorTest>( 
            "Should_Return_1_on_1", 
            &CStringCalculatorTest::Should_Return_1_on_1 ) );

        suiteOfTests->addTest( new CppUnit::TestCaller<CStringCalculatorTest>( 
            "Should_Return_2_on_1_and_1", 
            &CStringCalculatorTest::Should_Return_2_on_1_and_1 ) );

        return suiteOfTests;
    }

};


#endif  // STRING_CALCULATOR_TEST__H
