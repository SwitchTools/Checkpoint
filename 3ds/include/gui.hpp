/*
 *   This file is part of Checkpoint
 *   Copyright (C) 2017-2019 Bernardo Giordano, FlagBrew
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *   Additional Terms 7.b and 7.c of GPLv3 apply to this file:
 *       * Requiring preservation of specified reasonable legal notices or
 *         author attributions in that material or in the Appropriate Legal
 *         Notices displayed by works containing it.
 *       * Prohibiting misrepresentation of the origin of that material,
 *         or requiring that modified versions of such material be marked in
 *         reasonable ways as different from the original version.
 */

#ifndef GUI_HPP
#define GUI_HPP

#include "archive.hpp"
#include "clickable.hpp"
#include "colors.hpp"
#include "hid.hpp"
#include "multiselection.hpp"
#include "scrollable.hpp"
#include "sprites.h"
#include "title.hpp"
#include "util.hpp"
#include <algorithm>
#include <citro2d.h>
#include <codecvt>
#include <locale>
#include <string>
#include <vector>

namespace Gui {
    void init(void);
    void exit(void);

    bool askForConfirmation(const std::string& text);
    void showError(Result res, const std::string& message);
    void showInfo(const std::string& message);
    void draw(void);
    void drawCopy(const std::u16string& src, u32 offset, u32 size);
    void frameEnd(void);
    size_t index(void);
    bool isBackupReleased(void);
    bool isRestoreReleased(void);
    bool isCheatReleased(void);
    bool isPlayCoinsReleased(void);
    std::string nameFromCell(size_t index);
    void resetIndex(void);
    void resetScrollableIndex(void);
    size_t scrollableIndex(void);
    void scrollableIndex(size_t index);
    void updateButtons(void);
    void updateSelector(void);

    C2D_Image TWLIcon(void);
    C2D_Image noIcon(void);
}

#endif