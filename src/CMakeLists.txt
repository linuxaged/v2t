cmake_minimum_required( VERSION 3.6.0 )

project ( v2t )

add_subdirectory( ./glxw glxw )

add_executable ( v2t main.cpp H264_Decoder.cpp YUV420P_Player.cpp )

target_compile_options( v2t PRIVATE -Wall )

#
# OpenGL
#
find_package( OpenGL REQUIRED )
target_link_libraries( v2t PRIVATE ${OPENGL_LIBRARY} )

#
# FFmpeg
#
find_path( AVCODEC_INCLUDE_DIR libavcodec/avcodec.h )
find_library( AVCODEC_LIBRARY avcodec )
find_library( AVUTIL_LIBRARY avutil )
target_include_directories( v2t PRIVATE ${AVCODEC_INCLUDE_DIR} )
target_link_libraries( v2t PRIVATE ${AVCODEC_LIBRARY} ${AVUTIL_LIBRARY} )

#
# GLFW3
#
find_package( glfw3 REQUIRED )
target_link_libraries( v2t PRIVATE glfw )

#
# glxw
#
target_link_libraries( v2t PRIVATE glxw )

#
# libpng
#
find_package( png REQUIRED )
target_link_libraries( v2t PRIVATE ${PNG_LIBRARY} )
