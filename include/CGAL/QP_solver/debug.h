// Copyright (c) 1997-2007  ETH Zurich (Switzerland).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org).
// You can redistribute it and/or modify it under the terms of the GNU
// General Public License as published by the Free Software Foundation,
// either version 3 of the License, or (at your option) any later version.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL: svn+ssh://scm.gforge.inria.fr/svn/cgal/branches/releases/CGAL-4.1-branch/QP_solver/include/CGAL/QP_solver/debug.h $
// $Id: debug.h 67117 2012-01-13 18:14:48Z lrineau $
// 
//
// Author(s)     : Sven Schoenherr
//                 Bernd Gaertner <gaertner@inf.ethz.ch>
//                 Franz Wessendorp 
//                 Kaspar Fischer 

#ifndef CGAL_QP_DEBUG_H
#define CGAL_QP_DEBUG_H

// macro definitions
// =================

// debug
// -----
#if (    defined( CGAL_QP_NO_DEBUG)\
      || defined( CGAL_QP_NO_ASSERTIONS)\
      || defined( CGAL_NO_ASSERTIONS)\
      || defined( CGAL_NO_DEBUG) || defined( NDEBUG))
#  define  CGAL_qpe_debug  if ( 0)
#else
#  define  CGAL_qpe_debug  if ( 1)
#endif // qpe debug

#endif // CGAL_QP_DEBUG_H

// ===== EOF ==================================================================
