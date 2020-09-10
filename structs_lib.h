#ifndef STRUCTS_LIB_H
#define STRUCTS_LIB_H

#include <stdint.h>
#include <QString>

#pragma pack(push, 1)
typedef struct struct_tableRegsWrite
{
    uint16_t  AdrModbus;         // Адрес модбас                   // 2b
    uint16_t  CurrentDistanse;   // Текущее измеряемое расстояние  // 2b
    uint16_t  CurrentVolume;     // Текущий измеряемый обьем       // 2b
    int       Boudrate;          // Скорость по uart               // 4b
    uint16_t  RegTransfer1;      // Регистр приема передачи 1      // 2b
    uint16_t  RegTransfer2;      // Регистр приема передачи 2      // 2b
    int       res2;                                                // 4b
    uint16_t  RegCommand;        // Регистр команд                 // 2b
    int       SensorId;          // Id сенсора                     // 4b
    float     StartOfMeasure;    // -0.7 - 7.0 метр                // 4b
    float     LenghtOfMeasure;   // 0.0 - 7.7 метр                 // 4b
    uint16_t  RepetitionMode;    // On demand / Streaming          // 2b
    uint16_t  PowerSaveMode;     // Режимы заданы перечислением    // 2b
    float     ReceiverGain;      // 0.0 - 1.0                      // 4b
    uint16_t  TXDisable;         // bool                           // 2b
    int       HWAAS;             // 1-63                           // 4b
    uint16_t  Profile;           // заданны перечислением (1-5)    // 2b
    uint16_t  MaximizeSignal;    // bool                           // 2b
    uint16_t  AsynchMeasure;     // bool                           // 2b
    int       DownSampFactor;    // 1,2,4 (“делитель волны”)       // 4b
    float     RunningAverage;    // 0.0 - 1.0                      // 4b
    uint16_t  NoiseLevel;        // bool                           // 2b
    int       res4;                                                // 4b
    int       res5;                                                // 4b
    uint16_t  TypeApproxim;     // Тип аппроксимации               // 2b
    uint16_t  res6;                                                // 2b
    uint16_t  TypeAverag;       // Тип усреднения                  // 2b
    uint16_t  IntervalAverag;   // Интервал усреднения             // 2b
    uint16_t  Password;         // Пароль                          // 2b
    uint16_t  RegStatus;        // Статусный регистр               // 2b
}struct_tableRegsWrite;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct struct_tableRegsRead
{
               uint16_t TypeDevice; // тип устройства 		        // 2b
               uint32_t SerialNum;  // серийный номер устройства    // 4b
               uint32_t VerApp;     // аппаратная версия устройства // 4b
               uint32_t LastDate;   // дата/время последней связи   // 4b
               uint16_t LogError;   // код логов ошибок             // 2b
}struct_tableRegsRead;
#pragma pack(pop)

typedef union union_tableRegsRead {
              struct_tableRegsRead Regs;
              uint16_t             Adr[sizeof(struct_tableRegsRead)/2];
}union_tableRegsRead;

typedef struct struct_Device
{
    union_tableRegsRead  device;
    QString              devicename;
    QString              portname;
    QString              modbusadr;
}struct_Device;


#endif // STRUCTS_LIB_H
