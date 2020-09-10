#include "libtype4.h"
#include <qobject.h>

#include "mws.h"
#include "structs_lib.h"

SettingsDialog *Settingdialog = NULL;
struct_Device DeviceSet;

bool dialogNEW(QMdiArea *mdiArea)
{
     bool answr =false;
     Settingdialog = new SettingsDialog(mdiArea);
     Settingdialog==NULL ? answr =  false : answr =  true ;
     return answr;
}

bool dialogDELETE()
{
     delete Settingdialog;
     return true;
}

bool setPortname(QString name)
{
    bool answr =false;
    DeviceSet.portname = name;
    answr = true;
    return answr;
};

bool setNameDevice(QString name)
{
    bool answr =false;
    DeviceSet.devicename = name;
    answr = true;
    return answr;
};

bool setModbusAdr(QString name)
{
    bool answr =false;
    DeviceSet.modbusadr = name;
    answr = true;
    return answr;
};

bool setDevice(uint16_t mas[],uint32_t size)
{
    bool answr =false;
    if ( size == sizeof(DeviceSet.device.Adr))
    {
         memcpy(DeviceSet.device.Adr,mas,size);
         answr = true;
    }
    return answr;
};

SettingsDialog::SettingsDialog(QMdiArea *mdiArea)
{
      m_settings = new MWS(mdiArea);
      mdiArea->addSubWindow(m_settings);
      m_settings->show();
};

SettingsDialog::~SettingsDialog()
{
    delete m_settings;
};

void SettingsDialog::Changed()
{

};
