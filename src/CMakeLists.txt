#---Automatically Generated from template 'CMakeList.txt' wrote by @aliben---
#
# @Copyright (C) 2018 All rights reserved.
# @filename: opencv_tutorial
# @author: aliben.develop@gmail.com
# @create_date: 2018-11-21 08:58:41
# @last_modified_date: NO_LAST_MODIFIED_DATE
# @description: TODO
#---****************************************************************---

FILE(GLOB_RECURSE HEADERS
  ../include/opencv_tutorial/*/*.h*
  ../include/opencv_tutorial/*.h*
  )
FILE(GLOB_RECURSE SOURCES *.cc)

ADD_LIBRARY(opencv_tutorial SHARED ${HEADERS} ${SOURCES})
TARGET_LINK_LIBRARIES(opencv_tutorial ${THIRD_PARTY_LIBS})
