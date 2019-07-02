cmake_minimum_required(VERSION 3.0)

project(3D_terrain_generation)

include_directories( External/Include )
include_directories( Common/Include )

find_library( OPENGLES3_LIBRARY GLESv2 "OpenGL ES v3.0 library")
find_library( EGL_LIBRARY EGL "EGL 1.4 library" )

SUBDIRS( Common
        Terrain)