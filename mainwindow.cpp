#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::addtext(QString x)
{
    ui->display->setText(ui->display->text()+x);
}

void MainWindow::on_b_zero_clicked()
{
    addtext("0");
}

void MainWindow::on_b_unu_clicked()
{
    addtext("1");
}

void MainWindow::on_b_doi_clicked()
{
    addtext("2");
}

void MainWindow::on_b_trei_clicked()
{
    addtext("3");
}

void MainWindow::on_b_patru_clicked()
{
    addtext("4");
}

void MainWindow::on_b_cinci_clicked()
{
    addtext("5");
}

void MainWindow::on_b_sase_clicked()
{
    addtext("6");
}

void MainWindow::on_b_sapte_clicked()
{
    addtext("7");
}

void MainWindow::on_b_opt_clicked()
{
    addtext("8");
}

void MainWindow::on_b_noua_clicked()
{
    addtext("9");
}

void MainWindow::set(int x)
{
    this->O=x;
}

int MainWindow::get()
{
    return this->O;
}

void MainWindow::on_b_a_clicked()
{
    this->set(0); //plus
    this->val = ui->display->text().toDouble();
    ui->display->clear();
}

void MainWindow::on_b_s_clicked()
{
    this->set(1); //minus
    this->val = ui->display->text().toDouble();
    ui->display->clear();
}
void MainWindow::on_b_inm_clicked()
{
    this->set(2); //addition
    this->val = ui->display->text().toDouble();
    ui->display->clear();
}
void MainWindow::on_b_imp_clicked()
{
    this->set(3); //subtraction
    this->val = ui->display->text().toDouble();
    ui->display->clear();
}

void MainWindow::on_b_delete_clicked()
{
    this->val=NULL;
    this->O=NULL;
    ui->display->clear();
}

void MainWindow::on_b_pow_clicked()
{
    this->set(4);
    this->val = ui->display->text().toDouble();
    ui->display->clear();
}

void MainWindow::on_pushButton_2_clicked()
{
    this->set(5);
    this->val = ui->display->text().toDouble();
    ui->display->clear();
}


void MainWindow::on_b_punct_clicked()
{
    this->addtext(".");
}


void MainWindow::on_b_egal_clicked()
{
    switch(this->O)
    {
        case 0: ui->display->setText(QString::number(this->val + ui->display->text().toDouble())); break;
        case 1: ui->display->setText(QString::number(this->val - ui->display->text().toDouble())); break;
        case 2: ui->display->setText(QString::number(this->val * ui->display->text().toDouble())); break;
        case 3: if(this->val==0 && ui->display->text() == "0")
                {
                    ui->display->setText(QString("ERROR"));
                    //ui->display->clear();
                }
                else ui->display->setText(QString::number(this->val / ui->display->text().toDouble())); break;
        case 4: ui->display->setText(QString::number(pow(this->val,ui->display->text().toDouble()))); break;
        case 5: ui->display->setText(QString::number(this->val/100*ui->display->text().toDouble())); break;

        //case 6: ui->display->setText(QString::number(this->val/100*ui->display->text().toDouble())); break;

    }
}


