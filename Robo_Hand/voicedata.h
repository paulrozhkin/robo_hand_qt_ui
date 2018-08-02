#ifndef VOICEDATA_H
#define VOICEDATA_H

#include <QObject>
#include <QList>

class VoiceData : public QObject
{
    Q_OBJECT
public:
    explicit VoiceData(uint freq, uint time,QObject *parent = nullptr);
    void AddData(uint ADC_Value);
    bool GetStatusBusy();
    void GetData();

signals:

public slots:

private:
    QList<uint>* DataList;  //Список в котором хранятся данные
    uint FrequeADC;         //Частота АЦП устройства(частота принимаемых данных в ГЦ)
    uint RecTime;           //Кол-во секунд для хранения
    uint MaxCountData;      //Частота * время
    bool StatusBusy;
    //QList<int>;
};

#endif // VOICEDATA_H
