#include "calc.h"
#include <string>
#include "cppunit/TestFixture.h"
#include "cppunit/extensions/HelperMacros.h"

class CalcTest : public CppUnit::TestFixture {
  CPPUNIT_TEST_SUITE(CalcTest);
  CPPUNIT_TEST(testAdd);
  CPPUNIT_TEST(testSubtract);
  CPPUNIT_TEST_SUITE_END();
 private:
  Calc *calc;
 public:
  void setUp();
  void tearDown();
  void testAdd();
  void testSubtract();
};
CPPUNIT_TEST_SUITE_REGISTRATION(CalcTest);