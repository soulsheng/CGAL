// Copyright (c) 1997  ETH Zurich (Switzerland).
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
// $URL: svn+ssh://scm.gforge.inria.fr/svn/cgal/branches/releases/CGAL-4.1-branch/Min_sphere_of_spheres_d/include/CGAL/Min_sphere_of_spheres_d_traits_2.h $
// $Id: Min_sphere_of_spheres_d_traits_2.h 67117 2012-01-13 18:14:48Z lrineau $
// 
//
// Author(s)     : Kaspar Fischer

#ifndef CGAL_MIN_SPHERE_OF_SPHERES_D_TRAITS_2_H
#define CGAL_MIN_SPHERE_OF_SPHERES_D_TRAITS_2_H

namespace CGAL {

  template<typename K_,                      // kernel
    typename FT_,                            // number type
    typename UseSqrt_ = Tag_false,           // whether to use square-roots
    typename Algorithm_ = Default_algorithm> // algorithm to use
  class Min_sphere_of_spheres_d_traits_2 {
  public: // types:
    typedef FT_ FT;
    typedef FT_ Radius;
    typedef typename K_::Point_2 Point;
    typedef std::pair<Point,Radius> Sphere;
    typedef typename K_::Cartesian_const_iterator_2 Cartesian_const_iterator;
    typedef UseSqrt_ Use_square_roots;
    typedef Algorithm_ Algorithm;

  public: // constants:
    static const int D = 2;                  // dimension

  public: // accessors:
    static inline const FT& radius(const Sphere& s) {
      return s.second;
    }

    static inline Cartesian_const_iterator
      center_cartesian_begin(const Sphere& s) {
      return s.first.cartesian_begin();
    }
  };

} // namespace CGAL

#endif // CGAL_MIN_SPHERE_OF_SPHERES_D_TRAITS_2_H
