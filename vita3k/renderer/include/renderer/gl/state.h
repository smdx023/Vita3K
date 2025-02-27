// Vita3K emulator project
// Copyright (C) 2021 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#pragma once

#include <renderer/state.h>
#include <renderer/types.h>

#include "types.h"
#include <features/state.h>

#include <SDL.h>

#include <map>
#include <string>
#include <vector>

namespace renderer::gl {
struct GLState : public renderer::State {
    GLContextPtr context;

    ShaderCache fragment_shader_cache;
    ShaderCache vertex_shader_cache;
    ProgramCache program_cache;
};

} // namespace renderer::gl
