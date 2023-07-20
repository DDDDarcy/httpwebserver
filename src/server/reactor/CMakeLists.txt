add_library(Reactor
    SHARED
        src/epoll.cpp
)

target_include_directories(Reactor PUBLIC ./include)