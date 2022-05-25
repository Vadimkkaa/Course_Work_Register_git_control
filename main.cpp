#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QInputDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    QTranslator guiTranslator;

    QStringList languages;

    languages << "English" << "Russian";

    QString lang = QInputDialog::getItem(NULL, "Select language", "Language",languages);

    if(lang == "Russian"){

        translator.load(":/russian.qm");
        guiTranslator.load("C:/Qt/6.2.2/mingw_64/translations/qtbase_ru.qm");
    }

    if(lang != "English"){
        a.installTranslator(&translator);
        a.installTranslator(&guiTranslator);
    }



    //const QStringList uiLanguages = QLocale::system().uiLanguages();
    //for (const QString &locale : uiLanguages) {
      //  const QString baseName = "Register_Course_Work_" + QLocale(locale).name();
        //if (translator.load(":/i18n/" + baseName)) {
          //  a.installTranslator(&translator);
            //break;
        //}
    //}



    MainWindow w;
    w.show();
    return a.exec();
}
