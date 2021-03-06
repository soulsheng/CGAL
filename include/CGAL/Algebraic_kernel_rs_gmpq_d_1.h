// Copyright (c) 2006-2010 Inria Lorraine (France). All rights reserved.
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
// $URL: svn+ssh://scm.gforge.inria.fr/svn/cgal/branches/releases/CGAL-4.1-branch/Algebraic_kernel_d/include/CGAL/Algebraic_kernel_rs_gmpq_d_1.h $
// $Id: Algebraic_kernel_rs_gmpq_d_1.h 67093 2012-01-13 11:22:39Z lrineau $
//
// Author: Luis Peñaranda <luis.penaranda@gmx.com>

#ifndef CGAL_ALGEBRAIC_KERNEL_RS_GMPQ_1
#define CGAL_ALGEBRAIC_KERNEL_RS_GMPQ_1

#include <CGAL/Gmpq.h>
#include <CGAL/RS/Algebraic_kernel_rs_1.h>

namespace CGAL{

typedef Algebraic_kernel_rs_1<Gmpq>     Algebraic_kernel_rs_gmpq_d_1;

}

#endif  // CGAL_ALGEBRAIC_KERNEL_RS_GMPQ_1
