#ifndef STRING_CALCULATOR_TEST__H
#define STRING_CALCULATOR_TEST__H

#include <cppunit/TestFixture.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TestSuite.h>

#include "../StringCalculator.h"

class StringCalculatorTest: public CppUnit::TestFixture  {

public:

    void ShouldReturnZeroForEmptyString()
    {
        CStringCalculator calc;
        CPPUNIT_ASSERT(calc.AddString("") == 0);
    }

    void ShouldReturnZeroForSingleZero()
    {
        CStringCalculator calc;
        CPPUNIT_ASSERT(calc.AddString("0") == 0);
    }

    void ShouldReturnValueFor1()
    {
        CStringCalculator calc;
        CPPUNIT_ASSERT(calc.AddString("1") == 1);
    }

    void ShouldReturnValueForNeg1()
    {
        CStringCalculator calc;
        CPPUNIT_ASSERT(calc.AddString("-1") == -1);
    }

    void ShouldReturnValueFor500()
    {
        CStringCalculator calc;
        CPPUNIT_ASSERT(calc.AddString("500") == 500);
    }

public:

    static CppUnit::Test *suite()
    {
        CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "StringCalculatorTest" );
        
        suiteOfTests->addTest( new CppUnit::TestCaller<StringCalculatorTest>( 
            "ShouldReturnZeroForEmptyString", 
            &StringCalculatorTest::ShouldReturnZeroForEmptyString ) );

        suiteOfTests->addTest( new CppUnit::TestCaller<StringCalculatorTest>( 
            "ShouldReturnZeroForSingleZero", 
            &StringCalculatorTest::ShouldReturnZeroForSingleZero ) );
        
        suiteOfTests->addTest( new CppUnit::TestCaller<StringCalculatorTest>( 
            "ShouldReturnValueFor1", 
            &StringCalculatorTest::ShouldReturnValueFor1 ) );
        
        suiteOfTests->addTest( new CppUnit::TestCaller<StringCalculatorTest>( 
            "ShouldReturnValueForNeg1", 
            &StringCalculatorTest::ShouldReturnValueForNeg1 ) );

        suiteOfTests->addTest( new CppUnit::TestCaller<StringCalculatorTest>( 
            "ShouldReturnValueFor500", 
            &StringCalculatorTest::ShouldReturnValueFor500 ) );

        return suiteOfTests;
    }

};


#endif  // STRING_CALCULATOR_TEST__H
