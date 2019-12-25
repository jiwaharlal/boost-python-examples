
PYTHON_ADD_MODULE(hello hello.cpp)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -E")

target_link_libraries(hello
    PRIVATE ${Boost_LIBRARIES}
    PRIVATE ${PYTHON_LIBRARIES}
)

FILE(COPY hello.py DESTINATION .)
ADD_TEST(NAME 01-HelloWorld COMMAND ${PYTHON_EXECUTABLE} hello.py)
