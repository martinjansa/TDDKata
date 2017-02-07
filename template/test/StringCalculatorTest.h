#ifndef STRING_CALCULATOR_TEST__H
#define STRING_CALCULATOR_TEST__H

#include <cppunit/TestFixture.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TestSuite.h>

class StringCalculatorTest: public CppUnit::TestFixture  {

public:

    void DummyTest()
    {
        CPPUNIT_ASSERT(true);
    }

public:

    static CppUnit::Test *suite()
    {
        CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "StringCalculatorTest" );
        
        suiteOfTests->addTest( new CppUnit::TestCaller<StringCalculatorTest>( 
            "DummyTest", 
            &StringCalculatorTest::DummyTest ) );

        return suiteOfTests;
    }

};


#endif  // STRING_CALCULATOR_TEST__H
