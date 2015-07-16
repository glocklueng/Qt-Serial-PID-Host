#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForCStrings(codec);
    MainWindow w;
    w.setFixedSize(720, 450);   //固定窗口大小
    w.setWindowFlags(Qt::WindowCloseButtonHint);    //主窗口只有关闭按钮
    w.show();

    return a.exec();
}
