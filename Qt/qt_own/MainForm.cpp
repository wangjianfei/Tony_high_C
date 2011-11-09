#include <QPixmap>
#include <QLabel>
#include <QFont>
#include <QPalette>
#include "MainForm.h"
//#include "logo.h"
#include "clock.h"
#include "date.h"
#include "picturedisplay.h"
#include "mymessage.h"
#include<QWidget>
#include<phonon>
#include<QUrl>
#include<QStringList>
#include<QHBoxLayout>
#include<QProcess>
#include"display.h"
MainForm::MainForm(QWidget *parent)
:QMainWindow(parent)
{
    pic = new myPicture(this);
    message = new MyMessage(this);
    //message->setMessage(QString::fromUtf8("迪斯尼世界欢迎您！ Welcome to Disneyworld!"));
    myForm();
   // mydisplayer();
   message->setMsg(QString::fromUtf8("太原欢迎您! Welcome to Taiyuan/* Industrial College!*/"));
    //MyLogo *logo = new MyLogo(this);

    myClock *clock = new myClock(this);
    clock->setGeometry(615,70, 150, 50);
    clock->setFrameShape(QFrame::NoFrame);
    clock->show();

    myDate *date = new myDate(this);
    date->setGeometry(600,15, 200, 80);
    date->setFrameShape(QFrame::NoFrame);
    date->show();

    QString filename1=QString::fromUtf8("1.AVI");
    mydisplay *mydis=new mydisplay(this);
    mydis->setGeometry(0, 0, 560, 400);
    mydis->dis_show(filename1);
   // mydis->show();

}

void MainForm::myForm()
{
    /* 视频黑色背景 */
    QLabel *label_vedio = new QLabel(this);
    label_vedio->setGeometry(0, 0, 560, 400);
    label_vedio->setAutoFillBackground (true);
    QPalette pal;
    pal.setColor(QPalette::Background, Qt::black);
    label_vedio->setPalette(pal);

    /* 主窗体框 */
    QLabel *label_mainForm = new QLabel(this);
    QString filename = QString::fromUtf8("./system_picture/mainform.png");
    QPixmap *mypic = new QPixmap(filename);
    label_mainForm->setPixmap(*mypic);
    label_mainForm->setGeometry(0, 0, mypic->width(), mypic->height());
    this->setGeometry(0, 0, mypic->width(), mypic->height());


}

//void MainForm::myForm()
//{
    /* 视频黑色背景 */
    /* QLabel *label_vedio = new QLabel(this);
    //label_vedio->setGeometry(0, 0,560, 400);
     label_vedio->resize(560,400);
    Phonon::VideoPlayer *player = new Phonon::VideoPlayer(Phonon::VideoCategory, label_vedio);
    player->load(Phonon::MediaSource("./1.AVI"));

    player->play();*/
    /*label_vedio->setAutoFillBackground (true);
    QPalette pal;
    pal.setColor(QPalette::Background, Qt::black);
    label_vedio->setPalette(pal);*/

     /*主窗体框 */
 /*   QLabel *label_mainForm = new QLabel(this);
    QString filename = QString::fromUtf8("./system_picture/mainform.png");
    QPixmap *mypic = new QPixmap(filename);
    label_mainForm->setPixmap(*mypic);
    label_mainForm->setGeometry(0, 0,mypic->width(), mypic->height());
    this->setGeometry(0, 0, mypic->width(), mypic->height());

    QProcess *process=new QProcess(this);
    QLabel *label_vedio = new QLabel(this);
         //media->play();el_vedio->setGeometry(0, 0,560, 400);
        label_vedio->resize(560,400);
    QStringList args;
        // args << "-slave";
         //args << "widget";
       //  args  << QString::number(label_vedio->resize(560,400));
         args << "1.AVI";
         process->setProcessChannelMode(QProcess::MergedChannels);
         process->start("mplayer",args);*/
    /*视频黑色背景*/
   /* QLabel *label_vedio = new QLabel(this);
     //media->play();el_vedio->setGeometry(0, 0,560, 400);
    label_vedio->resize(560,400);
    Phonon::VideoPlayer *player = new Phonon::VideoPlayer(Phonon::VideoCategory, label_vedio);
    player->load(Phonon::MediaSource("./1.AVI"));

     player->play();*/
    /*QWidget *widget = new QWidget(this);
         widget->setWindowTitle("Media Player");
         widget->resize(560,400);

         Phonon::MediaObject *media = new Phonon::MediaObject;
         media->setCurrentSource(Phonon::MediaSource("./1.AVI"));

         Phonon::VideoWidget *vwidget = new Phonon::VideoWidget(widget);
         Phonon::createPath(media, vwidget);
         vwidget->setAspectRatio(Phonon::VideoWidget::AspectRatioAuto);
         Phonon::AudioOutput *aOutput = new Phonon::AudioOutput(Phonon::VideoCategory);
         Phonon::createPath(media, aOutput);

         QLabel *label = new QLabel("Volume: ");
         Phonon::VolumeSlider *volumeSlider = new Phonon::VolumeSlider;
         volumeSlider->setAudioOutput(aOutput);
         volumeSlider->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);

         Phonon::SeekSlider *seekSlider = new Phonon::SeekSlider;
         seekSlider->setMediaObject(media);

         QHBoxLayout *hLayout = new QHBoxLayout;
         hLayout->addWidget(label);
         hLayout->addWidget(volumeSlider);
         hLayout->addStretch();

         QVBoxLayout *vLayout = new QVBoxLayout;
         vLayout->addWidget(vwidget);
         vLayout->addWidget(seekSlider);
         vLayout->addLayout(hLayout);

         widget->setLayout(vLayout);

         widget->show();
         media->play();*/

//}



