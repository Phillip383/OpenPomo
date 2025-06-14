#ifndef POMOCLOCK_H
#define POMOCLOCK_H

#include <QWidget>

namespace Ui {
class PomoClock;
}

class PomoClock : public QWidget
{
    Q_OBJECT

public:
    explicit PomoClock(QWidget *parent = nullptr);
    ~PomoClock();

private:
    Ui::PomoClock *ui;
};

#endif // POMOCLOCK_H
