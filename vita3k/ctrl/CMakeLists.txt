add_library(
	ctrl
	STATIC
	include/ctrl/ctrl.h
	include/ctrl/functions.h
	include/ctrl/state.h
	src/ctrl.cpp
)

target_include_directories(ctrl PUBLIC include)
target_link_libraries(ctrl PUBLIC host sdl2 util)
