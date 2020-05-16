#include "calc_test.h"
#include <string>
#include "cppunit/TestFixture.h"
#include "cppunit/extensions/HelperMacros.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/extensions/TestFactoryRegistry.h"

void CalcTest::setUp() {
  calc = new Calc();
}

void CalcTest::tearDown() {
  delete calc;
}

void CalcTest::testAdd() {
  CPPUNIT_ASSERT(calc->Add(1, 1) == 2);
}

void CalcTest::testSubtract() {
  CPPUNIT_ASSERT(calc->Subtract(2, 1) == 1);
}
