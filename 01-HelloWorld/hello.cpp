#include <iostream>
#include <numeric>
#include <vector>

char const* greet()
{
   return "hello, world";
}

void say(const std::string& msg)
{
    std::cout << msg << std::endl;
}

std::int32_t sum(const std::vector<std::int32_t>& ints)
{
    return std::accumulate(ints.begin(), ints.end(), 0);
}

std::string reverse(const std::string& s)
{
    return {s.rbegin(), s.rend()};
}

#include <boost/python.hpp>

BOOST_PYTHON_MODULE(hello)
{
    using namespace boost::python;
    def("greet", greet);
    def("say", say);
    def("sum", sum);
    def("reverse", reverse);
}
