#ifndef MWS_H
#define MWS_H

#include <QWidget>

namespace Ui {
class MWS;
}

class MWS : public QWidget
{
    Q_OBJECT
public:
    explicit MWS(QWidget *parent = nullptr);
    ~MWS();

private:
    Ui::MWS *ui;
};

#endif // MWS_H
