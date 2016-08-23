#include "xlink.h"
#include "ui_xlink.h"

#include <QFileDialog>

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

void Xlink::on_pButtonOpen_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("打开文件"), "/", tr("任何支持的文件(*.bin *.hex);;所有文件(*.*)"));
    if (fileName.length() != 0)
        ui->labelStatus->setText(tr("打开文件:") + fileName);
}

void Xlink::on_pButtonConnect_clicked()
{

}

void Xlink::on_pButtonSetup_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("打开设备配置文件"), "/", tr("配置文件(*.cfg)"));
    if (fileName.length() != 0)
        ui->labelStatus->setText(tr("已打开配置文件文件:") + fileName);
}
