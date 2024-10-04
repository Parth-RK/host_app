#include <QApplication>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>
#include <QIcon>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    
    // Set window icon
    QIcon appIcon(":/logo.png");
    app.setWindowIcon(appIcon);

    // Create main window
    QWidget window;
    window.setWindowTitle("Hello Qt Application");
    window.setStyleSheet("background-color: white;");

    // Create label
    QLabel *label = new QLabel("Hello, World!");
    label->setAlignment(Qt::AlignCenter);  // Center text inside the label

    // Create layout and center label
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label);
    window.setLayout(layout);

    // Show window in fullscreen mode
    window.showFullScreen();  // Opens in full screen

    return app.exec();
}
