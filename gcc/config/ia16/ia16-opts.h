/* Definitions for option handling for IA-16.
   Copyright (C) 2017 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

#ifndef IA16_OPTS_H
#define IA16_OPTS_H

enum mmodel {
  MM_TINY,      /* Everything in same 64kB (.com file).  */
  MM_SMALL,     /* Code fits in 64kB, data/stack in another 64kB.  */
  MM_COMPACT,   /* Code fits in 64kB. Each CU has up to 64kB of data.  */
  MM_MEDIUM,    /* Each CU has up to 64kB of code.  Data/stack fits in 64kB. */
  MM_LARGE,     /* Each CU has up to 64kB of code and up to 64kB of data.  */
  MM_HUGE	/* Same as large except that can have >64kB in an array.  */
};

#endif
