/**  This file is part of FreeTumble.
  *
  *  FreeTumble is free software: you can redistribute it and/or modify
  *  it under the terms of the GNU General Public License as published by
  *  the Free Software Foundation, either version 3 of the License, or
  *  (at your option) any later version.
  *
  *  FreeTumble is distributed in the hope that it will be useful,
  *  but WITHOUT ANY WARRANTY; without even the implied warranty of
  *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  *  GNU General Public License for more details.
  *
  *  You should have received a copy of the GNU General Public License
  *  along with FreeTumble.  If not, see <http://www.gnu.org/licenses/>.
  */

#include "Menu.h"

Menu::Menu(wstring title)
{
    this->title=title;
    nEntries=0;
    selectedEntry=-1;
}

Menu::~Menu()
{
    for (int i=0; i < nEntries; i++)
        delete entry[i];
}

void Menu::addEntry (MenuEntry* entry)
{
    if (nEntries >= MENU_SIZE_MAX) return;

    this->entry[nEntries]=entry;
    nEntries++;
}

wstring Menu::getFullEntry(int n)
{
    return entry[n]->getFullText();
}
