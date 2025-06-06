/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2025 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#include "../../SDL_internal.h"

#ifndef SDL_windowsshape_h_
#define SDL_windowsshape_h_

#include "SDL_video.h"
#include "SDL_shape.h"
#include "../SDL_sysvideo.h"
#include "../SDL_shape_internals.h"

typedef struct
{
    SDL_ShapeTree *mask_tree;
} SDL_ShapeData;

extern SDL_WindowShaper *Win32_CreateShaper(SDL_Window *window);
extern int Win32_SetWindowShape(SDL_WindowShaper *shaper, SDL_Surface *shape, SDL_WindowShapeMode *shape_mode);
extern int Win32_ResizeWindowShape(SDL_Window *window);

#endif /* SDL_windowsshape_h_ */
