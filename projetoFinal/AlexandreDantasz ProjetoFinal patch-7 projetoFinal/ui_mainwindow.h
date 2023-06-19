/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tabAluno;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTextEdit *textEdit;
    QWidget *tabMatricula;
    QGroupBox *groupBox_3;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QLabel *label_14;
    QLineEdit *lineEdit_14;
    QGroupBox *groupBox_4;
    QLabel *label_11;
    QLineEdit *lineEdit_11;
    QLabel *label_12;
    QLineEdit *lineEdit_12;
    QLabel *label_13;
    QLineEdit *lineEdit_13;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QGroupBox *groupBox_5;
    QLabel *label_15;
    QLineEdit *lineEdit_15;
    QWidget *tabDisciplina;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QTextEdit *textEdit_2;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QTextEdit *textEdit_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(-10, 0, 811, 571));
        tabAluno = new QWidget();
        tabAluno->setObjectName("tabAluno");
        label = new QLabel(tabAluno);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 50, 91, 41));
        lineEdit = new QLineEdit(tabAluno);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 50, 641, 41));
        label_2 = new QLabel(tabAluno);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 140, 141, 41));
        lineEdit_2 = new QLineEdit(tabAluno);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(160, 140, 601, 41));
        pushButton = new QPushButton(tabAluno);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 230, 101, 41));
        pushButton_2 = new QPushButton(tabAluno);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 230, 111, 41));
        pushButton_3 = new QPushButton(tabAluno);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(440, 230, 111, 41));
        pushButton_4 = new QPushButton(tabAluno);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(610, 230, 121, 41));
        textEdit = new QTextEdit(tabAluno);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(60, 300, 681, 201));
        tabWidget->addTab(tabAluno, QString());
        tabMatricula = new QWidget();
        tabMatricula->setObjectName("tabMatricula");
        groupBox_3 = new QGroupBox(tabMatricula);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(30, 20, 761, 151));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 30, 131, 41));
        lineEdit_8 = new QLineEdit(groupBox_3);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(150, 40, 601, 31));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 90, 91, 41));
        lineEdit_14 = new QLineEdit(groupBox_3);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setGeometry(QRect(130, 90, 601, 31));
        groupBox_4 = new QGroupBox(tabMatricula);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(30, 180, 761, 221));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 40, 91, 31));
        lineEdit_11 = new QLineEdit(groupBox_4);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setGeometry(QRect(110, 40, 621, 31));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 90, 81, 31));
        lineEdit_12 = new QLineEdit(groupBox_4);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setGeometry(QRect(100, 90, 631, 31));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 150, 201, 31));
        lineEdit_13 = new QLineEdit(groupBox_4);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setGeometry(QRect(210, 140, 521, 71));
        pushButton_13 = new QPushButton(tabMatricula);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(310, 430, 83, 29));
        pushButton_14 = new QPushButton(tabMatricula);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(390, 430, 83, 29));
        pushButton_15 = new QPushButton(tabMatricula);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(470, 430, 83, 29));
        pushButton_16 = new QPushButton(tabMatricula);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(550, 430, 83, 29));
        groupBox_5 = new QGroupBox(tabMatricula);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(30, 399, 261, 81));
        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 30, 131, 31));
        lineEdit_15 = new QLineEdit(groupBox_5);
        lineEdit_15->setObjectName("lineEdit_15");
        lineEdit_15->setGeometry(QRect(150, 30, 91, 31));
        tabWidget->addTab(tabMatricula, QString());
        tabDisciplina = new QWidget();
        tabDisciplina->setObjectName("tabDisciplina");
        groupBox = new QGroupBox(tabDisciplina);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 10, 751, 241));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 40, 91, 31));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(110, 40, 621, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 90, 81, 31));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(100, 90, 631, 31));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(30, 160, 83, 29));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(130, 160, 83, 29));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(230, 160, 83, 29));
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(330, 160, 83, 29));
        textEdit_2 = new QTextEdit(groupBox);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(430, 140, 301, 91));
        groupBox_2 = new QGroupBox(tabDisciplina);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 260, 751, 241));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 40, 91, 31));
        lineEdit_5 = new QLineEdit(groupBox_2);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(110, 40, 621, 31));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 90, 121, 31));
        lineEdit_6 = new QLineEdit(groupBox_2);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(150, 90, 581, 31));
        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(30, 160, 83, 29));
        pushButton_10 = new QPushButton(groupBox_2);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(130, 160, 83, 29));
        pushButton_11 = new QPushButton(groupBox_2);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(230, 160, 83, 29));
        pushButton_12 = new QPushButton(groupBox_2);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(330, 160, 83, 29));
        textEdit_3 = new QTextEdit(groupBox_2);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(430, 140, 301, 91));
        tabWidget->addTab(tabDisciplina, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; font-style:italic;\">Nome:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; font-style:italic;\">Matr\303\255cula:</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Consultar", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Atualizar", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAluno), QCoreApplication::translate("MainWindow", "Aluno", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Aluno", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; font-style:italic;\">Matr\303\255cula:</span></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; font-style:italic;\">Nome:</span></p><p><br/></p></body></html>", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Disciplina", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; font-style:italic;\">C\303\263digo:</span></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; font-style:italic;\">Nome:</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; font-style:italic;\">Turma/Subturma:</span></p></body></html>", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Matricular", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "Atualizar", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Matr\303\255cula", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic;\">Turma/Subturma:</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabMatricula), QCoreApplication::translate("MainWindow", "Matr\303\255cula", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Disciplina", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; font-style:italic;\">C\303\263digo:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; font-style:italic;\">Nome:</span></p></body></html>", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Criar", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Atualizar", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Turma", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; font-style:italic;\">C\303\263digo:</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; font-style:italic;\">Subturma:</span></p></body></html>", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Criar", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Atualizar", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDisciplina), QCoreApplication::translate("MainWindow", "Disciplina/Turma", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
