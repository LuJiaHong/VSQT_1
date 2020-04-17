#pragma once

#include <QtWidgets/QWidget>
#include "ui_vsqt_1.h"

class VSQT_1 : public QWidget
{
	Q_OBJECT

public:
	VSQT_1(QWidget *parent = Q_NULLPTR);

private:
	Ui::VSQT_1Class ui;
};
