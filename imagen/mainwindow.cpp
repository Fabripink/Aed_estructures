#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QImage myImage;
    myImage.load("test.png");

    QLabel myLabel;
    myLabel.setPixmap(QPixmap::fromImage(myImage));

    myLabel.show();

    return a.exec();
}
