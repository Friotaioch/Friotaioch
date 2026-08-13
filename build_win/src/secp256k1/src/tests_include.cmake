set(runner   [[/home/liam/friotaioch/build_win/src/secp256k1/bin/tests.exe]])
set(launcher [[]])
set(emulator [[]])

execute_process(
  COMMAND ${launcher} ${emulator} ${runner} --list_tests
  OUTPUT_VARIABLE output OUTPUT_STRIP_TRAILING_WHITESPACE
  ERROR_VARIABLE  output ERROR_STRIP_TRAILING_WHITESPACE
  RESULT_VARIABLE result
)

if(NOT result EQUAL 0)
  add_test([[tests_DISCOVERY_FAILURE]] ${launcher} ${emulator} ${runner} --list_tests)
else()
  string(REPLACE "\n" ";" lines "${output}")
  foreach(line IN LISTS lines)
    if(line MATCHES "^\t\\[ *[0-9]+\\] ([^ ].*)$")
      string(REGEX REPLACE "^\t\\[ *[0-9]+\\] ([^ ].*)$" "secp256k1.tests.\\1" test_name "${line}")
      string(REGEX REPLACE "^\t\\[ *[0-9]+\\] ([^ ].*)$" "--target=\\1 --log=1" test_args "${line}")
      separate_arguments(test_args)
      add_test("${test_name}" ${launcher} ${emulator} ${runner} ${test_args})
      set_tests_properties("${test_name}" PROPERTIES
        "LABELS" "secp256k1_tests"
      )
    endif()
  endforeach()
endif()
