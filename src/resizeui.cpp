/****************************************************************************\
 Copyright (c) 2010-2014 Stitch Works Software
 Brian C. Milco <bcmilco@gmail.com>

 This file is part of Crochet Charts.

 Crochet Charts is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Crochet Charts is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNQTabWidgetESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Crochet Charts. If not, see <http://www.gnu.org/licenses/>.

 \****************************************************************************/
#include "resizeui.h"
#include "ui_resize.h"

ResizeUI::ResizeUI(QTabWidget* tabWidget, QWidget* parent)
	: QDockWidget(parent),
	mTabWidget(tabWidget),
	ui(new Ui::ResizeDialog)
{
    ui->setupUi(this);
    setVisible(false);
    setFloating(true);
	
	connect(this, SIGNAL(visibilityChanged(bool)), SLOT(Shown(bool)));
}

ResizeUI::~ResizeUI()
{
	
}

void ResizeUI::Shown(bool shown)
{
	
}

void ResizeUI::ClampPressed()
{
	
}

void ResizeUI::ResizePressed()
{
	emit resize(QRect(0,0,100,100));
}