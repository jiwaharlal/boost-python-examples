
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -E")

PYTHON_ADD_MODULE(classes classes.cpp)
FILE(COPY classes.py DESTINATION .)
ADD_TEST(NAME 02-ExposingClasses COMMAND ${PYTHON_EXECUTABLE} classes.py)
