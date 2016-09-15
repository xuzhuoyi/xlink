#ifndef XLINK_H
#define XLINK_H

#include <QWidget>
#include <QProcess>

namespace Ui {
class Xlink;
}

class Xlink : public QWidget
{
    Q_OBJECT

public:
    explicit Xlink(QWidget *parent = 0);
    ~Xlink();

private slots:
    void on_pButtonOpen_clicked();

    void on_pButtonConnect_clicked();

    void on_pButtonSetup_clicked();
    void readLog();

private:
    Ui::Xlink *ui;

    QString m_fileName;
    QString m_configFileName;
    QProcess *m_pProcess;
};

#endif // XLINK_H
