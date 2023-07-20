add_library(httpsuport
SHARED
 ./src/HttpMsg.cpp
)

target_include_directories(httpsuport PUBLIC ./include)

