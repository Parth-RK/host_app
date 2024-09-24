#include <QApplication>
#include <QLabel>
#include <QIcon>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Set window icon
    QIcon appIcon(":/logo.png");  // Use a relative path or resource path for the icon
    app.setWindowIcon(appIcon);

    QLabel label("Hello, World!");
    label.setStyleSheet("background-color: white;");

    label.show();

    return app.exec();
}
