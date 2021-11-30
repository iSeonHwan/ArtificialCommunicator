
Manipulators are helper functions that make it possible to control input/output streams using operator<< or operator>>.

The manipulators that are invoked without arguments (e.g. std::cout << std::boolalpha; or std::cin >> std::hex;) are implemented as functions that take a reference to a stream as their only argument. The special overloads of basic_ostream::operator<< and basic_istream::operator>> accept pointers to these functions. These functions (or instantiations of function templates) are the only addressable functions in the standard library. (since C++20)

The manipulators that are invoked with arguments (e.g. std::cout << std::setw(10);) are implemented as functions returning objects of unspecified type. These manipulators define their own operator<< or operator>> which perform the requested manipulation.



resource: https://en.cppreference.com/w/cpp/io/manip
