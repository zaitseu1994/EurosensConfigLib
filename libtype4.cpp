#include "libtype4.h"
#include <qobject.h>

#include "mws.h"
#include "structs_lib.h"

int CountSetting  = 0;
SettingsDialog *Settingdialog[CountSet] = {NULL};
struct_Device DeviceSet;

bool dialogNEW(QMdiArea *mdiArea)
{
     bool answr =false;
     if( CountSetting<=CountSet)
     {
        Settingdialog[CountSetting] = new SettingsDialog(mdiArea);
        Settingdialog[CountSetting]==NULL ? answr =  false : answr =  true ;
        CountSetting++;
     }
     return answr;
}

bool dialogDELETE()
{
     for(int i=0;i<CountSet;i++)
     {
         if(Settingdialog[i]!=NULL)
         {
             delete Settingdialog[i];
         }
     }
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
