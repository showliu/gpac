/**
 *			GPAC - Multimedia Framework C SDK
 *
 *			Copyright (c) Jean Le Feuvre 2000-2005
 *					All rights reserved
 *
 *  This file is part of GPAC
 *
 *  GPAC is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *   
 *  GPAC is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *   
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  Written by Pierre Souchay for VizionR SAS
 *
 */
#ifndef M3U8_PARSER_H
#define M3U8_PARSER_H
#include "playlist.h"

/**
 * Parse the given playlist file
 * @param file The file from cache to parse
 * @param The playlist to fill. If argument is null, and file is valid, playlist will be allocated
 * @return GF_OK if playlist valid
 */
GF_Err parse_root_playlist(const char * file, VariantPlaylist ** playlist, const char * baseURL);

#endif /* M3U8_PARSER_H */