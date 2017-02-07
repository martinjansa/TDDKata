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

public:

    static CppUnit::Test *suite()
    {
        CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "StringCalculatorTest" );
        
        suiteOfTests->addTest( new CppUnit::TestCaller<StringCalculatorTest>( 
            "ShouldReturnZeroForEmptyString", 
            &StringCalculatorTest::ShouldReturnZeroForEmptyString ) );

        return suiteOfTests;
    }

};


#endif  // STRING_CALCULATOR_TEST__H
