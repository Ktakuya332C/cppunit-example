find_path(CPPUNIT_INCLUDE_DIR
  NAMES cppunit/Test.h)
find_library(CPPUNIT_LIBRARY
  NAMES cppunit)
mark_as_advanced(
  CPPUNIT_INCLUDE_DIR
  CPPUNIT_LIBRARY
)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(CppUnit
  REQUIRED_VARS CPPUNIT_INCLUDE_DIR CPPUNIT_LIBRARY
)
