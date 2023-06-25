#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonCriar_Disciplina_Disciplina_clicked()
{
    QString cod = ui->lineEditCodigo_Disciplina_Disciplina->text();
}

