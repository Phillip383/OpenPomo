#include "pomoclock.h"
#include "ui_pomoclock.h"

PomoClock::PomoClock(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PomoClock)
{
    ui->setupUi(this);
}

PomoClock::~PomoClock()
{
    delete ui;
}
