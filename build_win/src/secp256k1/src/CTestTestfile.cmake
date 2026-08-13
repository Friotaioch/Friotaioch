# CMake generated Testfile for 
# Source directory: /home/liam/friotaioch/src/secp256k1/src
# Build directory: /home/liam/friotaioch/build_win/src/secp256k1/src
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("/home/liam/friotaioch/build_win/src/secp256k1/src/noverify_tests_include.cmake")
include("/home/liam/friotaioch/build_win/src/secp256k1/src/tests_include.cmake")
add_test([=[secp256k1.exhaustive_tests]=] "/home/liam/friotaioch/build_win/src/secp256k1/bin/exhaustive_tests.exe")
set_tests_properties([=[secp256k1.exhaustive_tests]=] PROPERTIES  LABELS "secp256k1_exhaustive" _BACKTRACE_TRIPLES "/home/liam/friotaioch/src/secp256k1/src/CMakeLists.txt;160;add_test;/home/liam/friotaioch/src/secp256k1/src/CMakeLists.txt;0;")
