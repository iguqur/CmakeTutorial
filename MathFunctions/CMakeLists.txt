add_library(MathFunctions MySqrt.cpp)

install (TARGETS MathFunctions DESTINATION bin)
install (FILES MathFunctions.h DESTINATION include)