/*
  meighbors.h: Copyright (C) 2012  Oka Motofumi

  Author: Oka Motofumi (chikuzen.mo at gmail dot com)

  This file is part of Neighbors

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with the author; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/


#ifndef NEIGHBORS_PUBLIC_H
#define NEIGHBORS_PUBLIC_H

#include "VapourSynth.h"

typedef void (VS_CC *proc_neighbors)(int plane, const VSFrameRef *src,
                                      const VSAPI *vsapi, VSFrameRef *dst);


extern const proc_neighbors minimum[];
extern const proc_neighbors median[];
extern const proc_neighbors maximum[];

#endif