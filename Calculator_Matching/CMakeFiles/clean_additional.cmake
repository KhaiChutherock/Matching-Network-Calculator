# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\CalMatching_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CalMatching_autogen.dir\\ParseCache.txt"
  "CalMatching_autogen"
  )
endif()
