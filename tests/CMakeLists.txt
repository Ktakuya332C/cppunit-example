add_executable(test_runner
  test_runner.cc
  calc_test.cc
)
target_include_directories(test_runner PRIVATE
  ${CPPUNIT_INCLUDE_DIR}
  "${PROJECT_SOURCE_DIR}/src"
)
target_link_libraries(test_runner PRIVATE
  calc
  ${CPPUNIT_LIBRARY}
)
add_test(
  NAME test_runner
  COMMAND $<TARGET_FILE:test_runner>
)
