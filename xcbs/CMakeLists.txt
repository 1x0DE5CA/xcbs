# CMakeList.txt : CMake project for xcbs, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (xcbs "xcbs.c" "xcbs.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET xcbs PROPERTY C_STANDARD 11)
endif()

# TODO: Add tests and install targets if needed.
