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
    QLineEdit *lineEditNomeAluno;
    QLabel *label_2;
    QLineEdit *lineEditMatriculaAluno;
    QPushButton *pushButtonCadastrarAluno;
    QPushButton *pushButtonConsultarAluno;
    QPushButton *pushButtonAtualizarAluno;
    QPushButton *pushButtonRemoverAluno;
    QTextEdit *textEditResultadoAluno;
    QWidget *tabMatricula;
    QGroupBox *groupBox_3;
    QLabel *label_8;
    QLineEdit *lineEditMatricula_Aluno_Matricula;
    QLabel *label_14;
    QLineEdit *lineEditNome_Aluno_Matricula;
    QGroupBox *groupBox_4;
    QLabel *label_11;
    QLineEdit *lineEditCodigo_Disciplina_Matricula;
    QLabel *label_12;
    QLineEdit *lineEditMatricula_Nome_Disciplina_Matricula;
    QLabel *label_13;
    QLineEdit *lineEditTurma_Disciplina_Matricula;
    QPushButton *pushButtonMatricular;
    QPushButton *pushButtonBuscarMatricula;
    QPushButton *pushButtonAtualizarMatricula;
    QPushButton *pushButtonRemoverMatricula;
    QGroupBox *groupBox_5;
    QLabel *label_15;
    QLineEdit *lineEditTurma_Matricula_Matricula;
    QWidget *tabDisciplina;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLineEdit *lineEditCodigo_Disciplina_Disciplina;
    QLabel *label_4;
    QLineEdit *lineEditNome_Disciplina_Disciplina;
    QPushButton *pushButtonCriar_Disciplina_Disciplina;
    QPushButton *pushButtonBuscar_Disciplina_Disciplina;
    QPushButton *pushButtonAtualizar_Disciplina_Disciplina;
    QPushButton *pushButtonRemover_Disciplina_Disciplina;
    QTextEdit *textEditResultado_Disciplina_Disciplina;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLineEdit *lineEditCodigo_Turma_Disciplina;
    QLabel *label_6;
    QLineEdit *lineEditSubTurma_Turma_Disciplina;
    QPushButton *pushButtonCriar_Turma_Disciplina;
    QPushButton *pushButtonBuscar_Turma_Disciplina;
    QPushButton *pushButtonAtualizar_Turma_Disciplina;
    QPushButton *pushButtonRemover_Turma_Disciplina;
    QTextEdit *textEditResultado_Turma_Disciplina;
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
        lineEditNomeAluno = new QLineEdit(tabAluno);
        lineEditNomeAluno->setObjectName("lineEditNomeAluno");
        lineEditNomeAluno->setGeometry(QRect(120, 50, 641, 41));
        label_2 = new QLabel(tabAluno);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 140, 141, 41));
        lineEditMatriculaAluno = new QLineEdit(tabAluno);
        lineEditMatriculaAluno->setObjectName("lineEditMatriculaAluno");
        lineEditMatriculaAluno->setGeometry(QRect(160, 140, 601, 41));
        pushButtonCadastrarAluno = new QPushButton(tabAluno);
        pushButtonCadastrarAluno->setObjectName("pushButtonCadastrarAluno");
        pushButtonCadastrarAluno->setGeometry(QRect(100, 230, 101, 41));
        pushButtonConsultarAluno = new QPushButton(tabAluno);
        pushButtonConsultarAluno->setObjectName("pushButtonConsultarAluno");
        pushButtonConsultarAluno->setGeometry(QRect(260, 230, 111, 41));
        pushButtonAtualizarAluno = new QPushButton(tabAluno);
        pushButtonAtualizarAluno->setObjectName("pushButtonAtualizarAluno");
        pushButtonAtualizarAluno->setGeometry(QRect(440, 230, 111, 41));
        pushButtonRemoverAluno = new QPushButton(tabAluno);
        pushButtonRemoverAluno->setObjectName("pushButtonRemoverAluno");
        pushButtonRemoverAluno->setGeometry(QRect(610, 230, 121, 41));
        textEditResultadoAluno = new QTextEdit(tabAluno);
        textEditResultadoAluno->setObjectName("textEditResultadoAluno");
        textEditResultadoAluno->setGeometry(QRect(60, 300, 681, 201));
        tabWidget->addTab(tabAluno, QString());
        tabMatricula = new QWidget();
        tabMatricula->setObjectName("tabMatricula");
        groupBox_3 = new QGroupBox(tabMatricula);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(30, 20, 761, 151));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 30, 131, 41));
        lineEditMatricula_Aluno_Matricula = new QLineEdit(groupBox_3);
        lineEditMatricula_Aluno_Matricula->setObjectName("lineEditMatricula_Aluno_Matricula");
        lineEditMatricula_Aluno_Matricula->setGeometry(QRect(150, 40, 601, 31));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 90, 91, 41));
        lineEditNome_Aluno_Matricula = new QLineEdit(groupBox_3);
        lineEditNome_Aluno_Matricula->setObjectName("lineEditNome_Aluno_Matricula");
        lineEditNome_Aluno_Matricula->setGeometry(QRect(130, 90, 601, 31));
        groupBox_4 = new QGroupBox(tabMatricula);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(30, 180, 761, 221));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 40, 91, 31));
        lineEditCodigo_Disciplina_Matricula = new QLineEdit(groupBox_4);
        lineEditCodigo_Disciplina_Matricula->setObjectName("lineEditCodigo_Disciplina_Matricula");
        lineEditCodigo_Disciplina_Matricula->setGeometry(QRect(110, 40, 621, 31));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 90, 81, 31));
        lineEditMatricula_Nome_Disciplina_Matricula = new QLineEdit(groupBox_4);
        lineEditMatricula_Nome_Disciplina_Matricula->setObjectName("lineEditMatricula_Nome_Disciplina_Matricula");
        lineEditMatricula_Nome_Disciplina_Matricula->setGeometry(QRect(100, 90, 631, 31));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 150, 201, 31));
        lineEditTurma_Disciplina_Matricula = new QLineEdit(groupBox_4);
        lineEditTurma_Disciplina_Matricula->setObjectName("lineEditTurma_Disciplina_Matricula");
        lineEditTurma_Disciplina_Matricula->setGeometry(QRect(210, 140, 521, 71));
        pushButtonMatricular = new QPushButton(tabMatricula);
        pushButtonMatricular->setObjectName("pushButtonMatricular");
        pushButtonMatricular->setGeometry(QRect(310, 430, 83, 29));
        pushButtonBuscarMatricula = new QPushButton(tabMatricula);
        pushButtonBuscarMatricula->setObjectName("pushButtonBuscarMatricula");
        pushButtonBuscarMatricula->setGeometry(QRect(390, 430, 83, 29));
        pushButtonAtualizarMatricula = new QPushButton(tabMatricula);
        pushButtonAtualizarMatricula->setObjectName("pushButtonAtualizarMatricula");
        pushButtonAtualizarMatricula->setGeometry(QRect(470, 430, 83, 29));
        pushButtonRemoverMatricula = new QPushButton(tabMatricula);
        pushButtonRemoverMatricula->setObjectName("pushButtonRemoverMatricula");
        pushButtonRemoverMatricula->setGeometry(QRect(550, 430, 83, 29));
        groupBox_5 = new QGroupBox(tabMatricula);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(30, 399, 261, 81));
        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 30, 131, 31));
        lineEditTurma_Matricula_Matricula = new QLineEdit(groupBox_5);
        lineEditTurma_Matricula_Matricula->setObjectName("lineEditTurma_Matricula_Matricula");
        lineEditTurma_Matricula_Matricula->setGeometry(QRect(150, 30, 91, 31));
        tabWidget->addTab(tabMatricula, QString());
        tabDisciplina = new QWidget();
        tabDisciplina->setObjectName("tabDisciplina");
        groupBox = new QGroupBox(tabDisciplina);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 10, 751, 241));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 40, 91, 31));
        lineEditCodigo_Disciplina_Disciplina = new QLineEdit(groupBox);
        lineEditCodigo_Disciplina_Disciplina->setObjectName("lineEditCodigo_Disciplina_Disciplina");
        lineEditCodigo_Disciplina_Disciplina->setGeometry(QRect(110, 40, 621, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 90, 81, 31));
        lineEditNome_Disciplina_Disciplina = new QLineEdit(groupBox);
        lineEditNome_Disciplina_Disciplina->setObjectName("lineEditNome_Disciplina_Disciplina");
        lineEditNome_Disciplina_Disciplina->setGeometry(QRect(100, 90, 631, 31));
        pushButtonCriar_Disciplina_Disciplina = new QPushButton(groupBox);
        pushButtonCriar_Disciplina_Disciplina->setObjectName("pushButtonCriar_Disciplina_Disciplina");
        pushButtonCriar_Disciplina_Disciplina->setGeometry(QRect(30, 160, 83, 29));
        pushButtonBuscar_Disciplina_Disciplina = new QPushButton(groupBox);
        pushButtonBuscar_Disciplina_Disciplina->setObjectName("pushButtonBuscar_Disciplina_Disciplina");
        pushButtonBuscar_Disciplina_Disciplina->setGeometry(QRect(130, 160, 83, 29));
        pushButtonAtualizar_Disciplina_Disciplina = new QPushButton(groupBox);
        pushButtonAtualizar_Disciplina_Disciplina->setObjectName("pushButtonAtualizar_Disciplina_Disciplina");
        pushButtonAtualizar_Disciplina_Disciplina->setGeometry(QRect(230, 160, 83, 29));
        pushButtonRemover_Disciplina_Disciplina = new QPushButton(groupBox);
        pushButtonRemover_Disciplina_Disciplina->setObjectName("pushButtonRemover_Disciplina_Disciplina");
        pushButtonRemover_Disciplina_Disciplina->setGeometry(QRect(330, 160, 83, 29));
        textEditResultado_Disciplina_Disciplina = new QTextEdit(groupBox);
        textEditResultado_Disciplina_Disciplina->setObjectName("textEditResultado_Disciplina_Disciplina");
        textEditResultado_Disciplina_Disciplina->setGeometry(QRect(430, 140, 301, 91));
        groupBox_2 = new QGroupBox(tabDisciplina);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 260, 751, 241));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 40, 91, 31));
        lineEditCodigo_Turma_Disciplina = new QLineEdit(groupBox_2);
        lineEditCodigo_Turma_Disciplina->setObjectName("lineEditCodigo_Turma_Disciplina");
        lineEditCodigo_Turma_Disciplina->setGeometry(QRect(110, 40, 621, 31));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 90, 121, 31));
        lineEditSubTurma_Turma_Disciplina = new QLineEdit(groupBox_2);
        lineEditSubTurma_Turma_Disciplina->setObjectName("lineEditSubTurma_Turma_Disciplina");
        lineEditSubTurma_Turma_Disciplina->setGeometry(QRect(150, 90, 581, 31));
        pushButtonCriar_Turma_Disciplina = new QPushButton(groupBox_2);
        pushButtonCriar_Turma_Disciplina->setObjectName("pushButtonCriar_Turma_Disciplina");
        pushButtonCriar_Turma_Disciplina->setGeometry(QRect(30, 160, 83, 29));
        pushButtonBuscar_Turma_Disciplina = new QPushButton(groupBox_2);
        pushButtonBuscar_Turma_Disciplina->setObjectName("pushButtonBuscar_Turma_Disciplina");
        pushButtonBuscar_Turma_Disciplina->setGeometry(QRect(130, 160, 83, 29));
        pushButtonAtualizar_Turma_Disciplina = new QPushButton(groupBox_2);
        pushButtonAtualizar_Turma_Disciplina->setObjectName("pushButtonAtualizar_Turma_Disciplina");
        pushButtonAtualizar_Turma_Disciplina->setGeometry(QRect(230, 160, 83, 29));
        pushButtonRemover_Turma_Disciplina = new QPushButton(groupBox_2);
        pushButtonRemover_Turma_Disciplina->setObjectName("pushButtonRemover_Turma_Disciplina");
        pushButtonRemover_Turma_Disciplina->setGeometry(QRect(330, 160, 83, 29));
        textEditResultado_Turma_Disciplina = new QTextEdit(groupBox_2);
        textEditResultado_Turma_Disciplina->setObjectName("textEditResultado_Turma_Disciplina");
        textEditResultado_Turma_Disciplina->setGeometry(QRect(430, 140, 301, 91));
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

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; font-style:italic;\">Nome:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; font-style:italic;\">Matr\303\255cula:</span></p></body></html>", nullptr));
        pushButtonCadastrarAluno->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        pushButtonConsultarAluno->setText(QCoreApplication::translate("MainWindow", "Consultar", nullptr));
        pushButtonAtualizarAluno->setText(QCoreApplication::translate("MainWindow", "Atualizar", nullptr));
        pushButtonRemoverAluno->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAluno), QCoreApplication::translate("MainWindow", "Aluno", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Aluno", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; font-style:italic;\">Matr\303\255cula:</span></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; font-style:italic;\">Nome:</span></p><p><br/></p></body></html>", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Disciplina", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; font-style:italic;\">C\303\263digo:</span></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; font-style:italic;\">Nome:</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; font-style:italic;\">Turma/Subturma:</span></p></body></html>", nullptr));
        pushButtonMatricular->setText(QCoreApplication::translate("MainWindow", "Matricular", nullptr));
        pushButtonBuscarMatricula->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        pushButtonAtualizarMatricula->setText(QCoreApplication::translate("MainWindow", "Atualizar", nullptr));
        pushButtonRemoverMatricula->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Matr\303\255cula", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic;\">Turma/Subturma:</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabMatricula), QCoreApplication::translate("MainWindow", "Matr\303\255cula", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Disciplina", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; font-style:italic;\">C\303\263digo:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; font-style:italic;\">Nome:</span></p></body></html>", nullptr));
        pushButtonCriar_Disciplina_Disciplina->setText(QCoreApplication::translate("MainWindow", "Criar", nullptr));
        pushButtonBuscar_Disciplina_Disciplina->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        pushButtonAtualizar_Disciplina_Disciplina->setText(QCoreApplication::translate("MainWindow", "Atualizar", nullptr));
        pushButtonRemover_Disciplina_Disciplina->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Turma", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; font-style:italic;\">C\303\263digo:</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; font-style:italic;\">Subturma:</span></p></body></html>", nullptr));
        pushButtonCriar_Turma_Disciplina->setText(QCoreApplication::translate("MainWindow", "Criar", nullptr));
        pushButtonBuscar_Turma_Disciplina->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        pushButtonAtualizar_Turma_Disciplina->setText(QCoreApplication::translate("MainWindow", "Atualizar", nullptr));
        pushButtonRemover_Turma_Disciplina->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDisciplina), QCoreApplication::translate("MainWindow", "Disciplina/Turma", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
