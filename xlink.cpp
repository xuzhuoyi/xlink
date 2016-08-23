#include "xlink.h"
#include "ui_xlink.h"

Xlink::Xlink(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Xlink)
{
    ui->setupUi(this);
}

Xlink::~Xlink()
{
    delete ui;
}
