//
// Copyright © 2018 Rodrigo Pelissier. All rights reserved.
//
// This file is part of La Weá Interpreter (C)
//
// La Weá Interpreter (C) is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.
//

#ifndef UTF8_UTF32_H
#define UTF8_UTF32_H

#include <stdlib.h>
#include <stdint.h>

size_t utf8_byte_utf8_code_point_length(uint_least8_t utf8_byte);
size_t utf32_char_utf8_code_point_length(uint_least32_t utf32_char);

size_t utf8_strlen(const uint_least8_t *utf8_str);
size_t utf32_strlen(const uint_least32_t *utf32_str);
size_t utf32_str_utf8_strlen(const uint_least32_t *utf32_str);

int utf32_strcmp(const uint_least32_t *utf32_str1, const uint_least32_t *utf32_str2);

uint_least32_t utf8_char_to_utf32(const uint_least8_t *utf8_char);
uint_least8_t *utf32_char_to_utf8(uint_least32_t utf32_char);
uint_least32_t *utf8_str_to_utf32(const uint_least8_t *utf8_str);
uint_least8_t *utf32_str_to_utf8(const uint_least32_t *utf32_str);

#endif
