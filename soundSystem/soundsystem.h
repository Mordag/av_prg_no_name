#include <QMediaPlayer>
#include <QSound>
#include <QObject>
#ifndef SOUNDSYSTEM_H
#define SOUNDSYSTEM_H

class SoundSystem : public QObject {
    Q_OBJECT

public:
    SoundSystem(QObject* parent);
    void init();
    void stop();
private:
    void load();
    void start();
private:
    QMediaPlayer* player;
    bool isPlaying;
public slots:
    void handleMouthOpenEvent();
};


#endif // SOUNDSYSTEM_H