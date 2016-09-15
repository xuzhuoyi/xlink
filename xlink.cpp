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
    m_fileName = QFileDialog::getOpenFileName(this, tr("打开文件"), "/", tr("任何支持的文件(*.bin *.hex);;所有文件(*.*)"));
    if (m_fileName.length() != 0)
        ui->labelStatus->setText(tr("打开文件:") + m_fileName);
}

void Xlink::on_pButtonConnect_clicked()
{
    QString program = "openocd";
    QStringList arguments;
    arguments << "-f" << m_configFileName;
    m_pProcess = new QProcess();
    connect(m_pProcess, SIGNAL(readyReadStandardError()), this, SLOT(readLog()));
    m_pProcess->start(program, arguments);
}

void Xlink::on_pButtonSetup_clicked()
{
    m_configFileName = QFileDialog::getOpenFileName(this, tr("打开设备配置文件"), "/", tr("配置文件(*.cfg)"));
    if (m_configFileName.length() != 0)
        ui->labelStatus->setText(tr("已打开配置文件文件:") + m_fileName);
}

void Xlink::readLog()
{
    ui->textBrowser->append(m_pProcess->readAllStandardError());
}
