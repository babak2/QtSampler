/*********************************************************
 * File: qt-sampler.cpp
 * Description: QtSampler is a simple Qt application that serves as a starting point 
 * for developers looking to build graphical user interface (GUI) applications using 
 * the Qt framework. It provides a basic structure and functionality to help you 
 * understand how to create Qt-based projects.
 * 
 * Author: Babak Mahdavi Ardestani
 * Email: babak.m.ardestani@gmail.com
 * Created:  2023-10-20

 *********************************************************/

#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QRadioButton>
#include <QComboBox>
#include <QSlider>
#include <QProgressBar>
#include <QTextEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Create the main window
    QMainWindow mainWindow;
    mainWindow.setWindowTitle("QtSampler");

    // Create widgets
    QLabel* label = new QLabel("Hello, Qt!");
    QLineEdit* lineEdit = new QLineEdit;
    QPushButton* pushButton = new QPushButton("Click Me");
    QCheckBox* checkBox = new QCheckBox("Check Me");
    QRadioButton* radioButton = new QRadioButton("Select Me");
    QComboBox* comboBox = new QComboBox;
    comboBox->addItem("Option 1");
    comboBox->addItem("Option 2");
    QSlider* slider = new QSlider(Qt::Horizontal);
    QProgressBar* progressBar = new QProgressBar;
    QTextEdit* textEdit = new QTextEdit;

    // Arrange widgets using layouts
    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->addWidget(label);
    mainLayout->addWidget(lineEdit);
    mainLayout->addWidget(pushButton);
    mainLayout->addWidget(checkBox);
    mainLayout->addWidget(radioButton);
    mainLayout->addWidget(comboBox);
    mainLayout->addWidget(slider);
    mainLayout->addWidget(progressBar);
    mainLayout->addWidget(textEdit);

    // Create a central widget and set the layout
    QWidget* centralWidget = new QWidget;
    centralWidget->setLayout(mainLayout);

    // Set the central widget of the main window
    mainWindow.setCentralWidget(centralWidget);

    // Connect signals and slots
    QObject::connect(pushButton, &QPushButton::clicked, [&]() {
        label->setText("Button Clicked!");
    });

    // Show the main window
    mainWindow.show();

    return app.exec();
}
