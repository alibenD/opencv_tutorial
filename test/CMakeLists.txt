#---Automatically Generated from template 'CMakeList.txt' wrote by @aliben---
#
# @Copyright (C) 2018 All rights reserved.
# @filename: opencv_tutorial
# @author: aliben.develop@gmail.com
# @create_date: 2018-11-21 08:58:41
# @last_modified_date: NO_LAST_MODIFIED_DATE
# @description: TODO
#---****************************************************************---


FILE(GLOB_RECURSE EXAMPLES *.cc)
FOREACH(EXAMPLE ${EXAMPLES})
  GET_FILENAME_COMPONENT(MY_TARGET "${EXAMPLE}" NAME_WE)
  ADD_EXECUTABLE(${MY_TARGET} ${EXAMPLE})
  TARGET_LINK_LIBRARIES(${MY_TARGET} opencv_tutorial)
ENDFOREACH()
