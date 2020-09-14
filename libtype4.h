#ifndef LIBTYPE4_H
#define LIBTYPE4_H
#include "libType4_global.h"

#include <QtWidgets/QMdiArea>
#include <QDialog>

#define CountSet 100

#include "mws.h"
class MWS;

extern "C"
{
  LIBTYPE4_EXPORT bool setPortname(QString name);
  LIBTYPE4_EXPORT bool setNameDevice(QString name);
  LIBTYPE4_EXPORT bool setModbusAdr(QString name);
  LIBTYPE4_EXPORT bool setDevice(uint16_t mas[],uint32_t size);

  LIBTYPE4_EXPORT bool dialogNEW(QMdiArea *mdiArea);
  LIBTYPE4_EXPORT bool dialogDELETE();
}

class  LIBTYPE4_EXPORT SettingsDialog : public QDialog
{

public:
    explicit SettingsDialog(QMdiArea *mdiArea);
    virtual ~SettingsDialog();
public slots:
    virtual void Changed();
private:
     MWS *m_settings = nullptr;
Q_SIGNALS:
   // void bottomChanged();
};


#endif // LIBTYPE4_H
