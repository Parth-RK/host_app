#include <QApplication>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QWidget>
#include <QIcon>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Set window icon
    QIcon appIcon(":/logo.png");
    app.setWindowIcon(appIcon);

    // Create main window
    QMainWindow window;
    window.setWindowTitle("Hello Qt Application");
    window.setStyleSheet("background-color: white;");
    w.resize(500, 500)
    // Create central widget
    QWidget *centralWidget = new QWidget;
    window.setCentralWidget(centralWidget);

    // Create label
    QLabel *label = new QLabel("Hello, World!");
    label->setAlignment(Qt::AlignCenter);  // Center text inside the label

    // Create layout and center label
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label);
    centralWidget->setLayout(layout);

    // Create menu bar
    QMenuBar *menuBar = window.menuBar();

    // Create file menu
    QMenu *fileMenu = menuBar->addMenu("File");

    // Create actions
    QAction *closeAction = fileMenu->addAction("Close");
    QAction *minimizeAction = fileMenu->addAction("Minimize");
    QAction *quitAction = fileMenu->addAction("Quit");

    // Connect actions to slots
    QObject::connect(closeAction, &QAction::triggered, &window, &QWidget::close);
    QObject::connect(minimizeAction, &QAction::triggered, &window, &QWidget::showMinimized);
    QObject::connect(quitAction, &QAction::triggered, &app, &QApplication::quit);

    // Show window
    window.show();

    return app.exec();
}