#include <QApplication>
#include <QWidget>
#include <phonon>
#include <QUrl>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  QWidget *widget = new QWidget;
  widget->setWindowTitle("Video Player");
  widget->resize(600,500);

  Phonon::VideoPlayer *player = new Phonon::VideoPlayer(Phonon::VideoCategory, widget);
  player->load(Phonon::MediaSource("./1.AVI"));

  player->play();

  widget->show();

  return app.exec();
}
