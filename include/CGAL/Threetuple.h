// Copyright (c) 1999,2001  
// Utrecht University (The Netherlands),
// ETH Zurich (Switzerland),
// INRIA Sophia-Antipolis (France),
// Max-Planck-Institute Saarbruecken (Germany),
// and Tel-Aviv University (Israel).  All rights reserved. 
//
// This file is part of CGAL (www.cgal.org); you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation; either version 3 of the License,
// or (at your option) any later version.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL: svn+ssh://scm.gforge.inria.fr/svn/cgal/branches/releases/CGAL-4.1-branch/STL_Extension/include/CGAL/Threetuple.h $
// $Id: Threetuple.h 67093 2012-01-13 11:22:39Z lrineau $
// 
//
// Author(s)     : Andreas Fabri
 
#ifndef CGAL_THREETUPLE_H
#define CGAL_THREETUPLE_H

#ifndef CGAL_NO_DEPRECATED_CODE

namespace CGAL {

template < class T >
struct Threetuple
{
  typedef T value_type;

  T  e0, e1, e2;

  Threetuple() CGAL_DEPRECATED
  {}

  Threetuple(const T & a0, const T & a1, const T & a2) CGAL_DEPRECATED
    : e0(a0), e1(a1), e2(a2)
  {}
};

} //namespace CGAL

#endif // CGAL_NO_DEPRECATED_CODE

#endif // CGAL_THREETUPLE_H
