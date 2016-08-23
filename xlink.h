#ifndef XLINK_H
#define XLINK_H

#include <QWidget>

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

private:
    Ui::Xlink *ui;
};

#endif // XLINK_H
