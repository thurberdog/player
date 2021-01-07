#include <QCoreApplication>
#include <QMediaPlayer>
#include <QSoundEffect>
#include <QSound>
#include <QUrl>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QUrl soundFile("qrc:/audio/sci_fi_beep_off.wav");
    QSoundEffect effect;
    effect.setSource(soundFile);
    effect.setLoopCount(QSoundEffect::Infinite);
    effect.play();
    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(soundFile);
    player->setVolume(50);
    player->play();
    QSound::play(":/audio/sci_fi_beep_off.wav");
    return a.exec();
}
