#include "mws.h"
#include "ui_mws.h"

MWS::MWS(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MWS)
{
    ui->setupUi(this);
}

MWS::~MWS()
{
    delete ui;
}
