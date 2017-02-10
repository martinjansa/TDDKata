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

    void Should_Return_300_on_100_and_200()
    {
        CStringCalculator calc;
        CPPUNIT_ASSERT_EQUAL(300, calc.AddString("100,200"));
    }

    void Should_Return_600_on_100_and_200_and_300()
    {
        CStringCalculator calc;
        CPPUNIT_ASSERT_EQUAL(600, calc.AddString("100,200,300"));
    }

    void Should_Return_1_on_Colon_Separator_Config_and_1()
    {
        CStringCalculator calc;
        CPPUNIT_ASSERT_EQUAL(1, calc.AddString("//:\n1"));
    }

    void Should_Return_3_on_Colon_Separator_Config_and_1_and_2()
    {
        CStringCalculator calc;
        CPPUNIT_ASSERT_EQUAL(3, calc.AddString("//:\n1:2"));
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

        suiteOfTests->addTest( new CppUnit::TestCaller<CStringCalculatorTest>( 
            "Should_Return_300_on_100_and_200", 
            &CStringCalculatorTest::Should_Return_300_on_100_and_200 ) );

        suiteOfTests->addTest( new CppUnit::TestCaller<CStringCalculatorTest>( 
            "Should_Return_600_on_100_and_200_and_300", 
            &CStringCalculatorTest::Should_Return_600_on_100_and_200_and_300 ) );

        suiteOfTests->addTest( new CppUnit::TestCaller<CStringCalculatorTest>( 
            "Should_Return_1_on_Colon_Separator_Config_and_1", 
            &CStringCalculatorTest::Should_Return_1_on_Colon_Separator_Config_and_1 ) );

        suiteOfTests->addTest( new CppUnit::TestCaller<CStringCalculatorTest>( 
            "Should_Return_3_on_Colon_Separator_Config_and_1_and_2", 
            &CStringCalculatorTest::Should_Return_3_on_Colon_Separator_Config_and_1_and_2 ) );

        return suiteOfTests;
    }

};


#endif  // STRING_CALCULATOR_TEST__H
