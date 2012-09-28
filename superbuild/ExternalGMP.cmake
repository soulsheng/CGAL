# GMP external project -*- CMake -*-
#
# Copyright (C) 2012 Guofu Xiang <gfxiang@gmail.com>.
# All rights reserved.

#set(GMP_MAJOR_VERSION 5)
#set(GMP_MINOR_VERSION 0)
#set(GMP_PATCH_VERSION 5)
#set(GMP_VERSION ${GMP_MAJOR_VERSION}.${GMP_MINOR_VERSION}.${GMP_PATCH_VERSION})

# Since there is no extension name in the github tarball, currently
# ExternalProject cannot determine how to extract the tarball.
#set(GMP_URL https://github.com/gx/gmp/tarball/gmp-${GMP_VERSION})
#set(GMP_MD5 37711729cc7131aa4317b48765128a91)
set(GMP_GIT_REPOSITORY https://github.com/gx/gmp.git)
#set(GMP_GIT_TAG gmp-${GMP_VERSION})

set(GMP_SOURCE_DIR "${CMAKE_CURRENT_BINARY_DIR}/gmp")
set(GMP_BINARY_DIR "${CMAKE_CURRENT_BINARY_DIR}/gmp-build")
set(GMP_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}")

configure_file(GMPConfigureStep.cmake.in GMPConfigureStep.cmake @ONLY)

set(GMP_CONFIGURE_COMMAND
  ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/GMPConfigureStep.cmake)

ExternalProject_Add(gmp
#  URL ${GMP_URL}
#  URL_MD5 ${GMP_MD5}
  SOURCE_DIR ${GMP_SOURCE_DIR}
  BINARY_DIR ${GMP_BINARY_DIR}
  INSTALL_DIR ${GMP_INSTALL_DIR}
  GIT_REPOSITORY ${GMP_GIT_REPOSITORY}
#  GIT_TAG ${GMP_GIT_TAG}
  UPDATE_COMMAND ""
  PATCH_COMMAND ""
  CONFIGURE_COMMAND ${GMP_CONFIGURE_COMMAND})

# GMP
set(GMP_INCLUDE_DIR "${GMP_INSTALL_DIR}/include")
set(GMP_LIBRARY_DIR "${GMP_INSTALL_DIR}/lib")
set(GMP_LIBRARY "${GMP_INSTALL_DIR}/lib/libgmp${CMAKE_LINK_LIBRARY_SUFFIX}")

set(GMP_INCLUDE_DIRS ${GMP_INCLUDE_DIR})
set(GMP_LIBRARY_DIRS ${GMP_LIBRARY_DIR})
set(GMP_LIBRARIES ${GMP_LIBRARY})
