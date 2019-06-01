#ifndef PRACTICE_H
#define PRACTICE_H

#include <QDialog>

namespace Ui {
class practice;
}

class practice : public QDialog
{
    Q_OBJECT

public:
    explicit practice(QWidget *parent = nullptr);
    ~practice();

private:
    Ui::practice *ui;
};

#endif // PRACTICE_H
