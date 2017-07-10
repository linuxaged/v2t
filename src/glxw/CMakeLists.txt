cmake_minimum_required( VERSION 3.6.0 )

#
# Common
#
project ( libglxw )
add_library( glxw
                 STATIC
                 src/glxw.c
                 src/glxw_wgl.c
                 )
target_compile_options( glxw PRIVATE -Wall )
target_include_directories( glxw PUBLIC include )
