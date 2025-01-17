/*
    This file is part of darktable,
    Copyright (C) 2020 darktable developers.

    darktable is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    darktable is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with darktable.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef DT_IMAGEIO_IM_H
#define DT_IMAGEIO_IM_H

#include "common/image.h"
#include "common/mipmap_cache.h"

#ifdef HAVE_IMAGEMAGICK
dt_imageio_retval_t dt_imageio_open_im(dt_image_t *img, const char *filename, dt_mipmap_buffer_t *buf);
#else
inline dt_imageio_retval_t dt_imageio_open_im(dt_image_t *img, const char *filename,
                                              dt_mipmap_buffer_t *buf)
{
  return DT_IMAGEIO_FILE_NOT_FOUND;
}
#endif

#endif
// modelines: These editor modelines have been set for all relevant files by tools/update_modelines.sh
// vim: shiftwidth=2 expandtab tabstop=2 cindent
// kate: tab-indents: off; indent-width 2; replace-tabs on; indent-mode cstyle; remove-trailing-spaces modified;
