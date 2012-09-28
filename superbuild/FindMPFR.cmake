# Try to find MPFR -*- CMake -*-
#
# Copyright (C) 2012 Guofu Xiang <gfxiang@gmail.com>.
# All rights reserved.
#
# This module defines:
#   MPFR_FOUND               System has MPFR
#   MPFR_INCLUDE_DIRS        The MPFR include directories
#   MPFR_LIBRARY_DIRS        The MPFR library directories
#   MPFR_LIBRARIES           The libraries needed to use MPFR

find_path(MPFR_INCLUDE_DIR mpfr.h)
find_library(MPFR_LIBRARY mpfr)
if(MPFR_LIBRARY)
  get_filename_component(MPFR_LIBRARY_DIR "${MPFR_LIBRARY}" PATH)
endif()

set(MPFR_INCLUDE_DIRS ${MPFR_INCLUDE_DIR})
set(MPFR_LIBRARY_DIRS ${MPFR_LIBRARY_DIR})
set(MPFR_LIBRARIES ${MPFR_LIBRARY})
  
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(MPFR DEFAULT_MSG
  MPFR_INCLUDE_DIR MPFR_LIBRARY
)

mark_as_advanced(MPFR_INCLUDE_DIR MPFR_LIBRARY)
