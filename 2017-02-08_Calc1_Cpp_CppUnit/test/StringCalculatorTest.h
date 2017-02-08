#ifndef STRING_CALCULATOR_TEST__H
#define STRING_CALCULATOR_TEST__H

#include <cppunit/TestFixture.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TestSuite.h>

#include "../StringCalculator.h"

class CStringCalculatorTest: public CppUnit::TestFixture  {

public:

    void DummyTest()
    {
        CStringCalculator calc;
        CPPUNIT_ASSERT(false);
    }

public:

    static CppUnit::Test *suite()
    {
        CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "CStringCalculatorTest" );
        
        suiteOfTests->addTest( new CppUnit::TestCaller<CStringCalculatorTest>( 
            "DummyTest", 
            &CStringCalculatorTest::DummyTest ) );

        return suiteOfTests;
    }

};


#endif  // STRING_CALCULATOR_TEST__H
