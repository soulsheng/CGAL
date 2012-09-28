# Try to find GMP -*- CMake -*-
#
# Copyright (C) 2012 Guofu Xiang <gfxiang@gmail.com>.
# All rights reserved.
#
# This module defines:
#   GMP_FOUND               System has GMP
#   GMP_INCLUDE_DIRS        The GMP include directories
#   GMP_LIBRARY_DIRS        The GMP library directories
#   GMP_LIBRARIES           The libraries needed to use GMP

find_path(GMP_INCLUDE_DIR gmp.h)
find_library(GMP_LIBRARY NAMES gmp libgmp)
if(GMP_LIBRARY)
  get_filename_component(GMP_LIBRARY_DIR "${GMP_LIBRARY}" PATH)
endif()

set(GMP_INCLUDE_DIRS ${GMP_INCLUDE_DIR})
set(GMP_LIBRARY_DIRS ${GMP_LIBRARY_DIR})
set(GMP_LIBRARIES ${GMP_LIBRARY})
  
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(GMP DEFAULT_MSG
  GMP_INCLUDE_DIR GMP_LIBRARY
)

mark_as_advanced(GMP_INCLUDE_DIR GMP_LIBRARY)
