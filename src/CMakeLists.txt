cmake_minimum_required( VERSION 3.6.0 )

project ( v2t )

add_subdirectory( ./glxw glxw )

add_executable ( v2t WIN32 main.cpp H264_Decoder.cpp YUV420P_Player.cpp )

target_compile_options( v2t PRIVATE -Wall )

#
# FFmpeg
#
find_path( AVCODEC_INCLUDE_DIR libavcodec/avcodec.h )
find_library( AVCODEC_LIBRARY avcodec )
target_include_directories( v2t PRIVATE ${AVCODEC_INCLUDE_DIR} )
target_link_libraries( v2t PRIVATE ${AVCODEC_LIBRARY})

#
# GLFW3
#
find_package( glfw3 REQUIRED )
target_link_libraries( v2t PRIVATE glfw3dll )

#
# glxw
#
target_link_libraries( v2t PRIVATE glxw )

#
# libpng
#
find_path( LIBPNG_INCLUDE_DIR libpng16/png.h )
find_library( LIBPNG_LIBRARY libpng16 )
target_include_directories( v2t PRIVATE ${LIBPNG_INCLUDE_DIR} )
target_link_libraries( v2t PRIVATE ${LIBPNG_LIBRARY} )
