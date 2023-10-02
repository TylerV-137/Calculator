#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    void addtext(QString x);
    int O;
    double val;

    void set(int x);
    int get();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_b_zero_clicked();

    void on_b_unu_clicked();

    void on_b_doi_clicked();

    void on_b_trei_clicked();

    void on_b_patru_clicked();

    void on_b_cinci_clicked();

    void on_b_sase_clicked();

    void on_b_sapte_clicked();

    void on_b_opt_clicked();

    void on_b_noua_clicked();

    void on_b_a_clicked();

    void on_b_egal_clicked();

    void on_b_s_clicked();

    void on_b_inm_clicked();

    void on_b_imp_clicked();

    void on_b_delete_clicked();

    void on_b_pow_clicked();

    void on_pushButton_2_clicked();

    void on_b_punct_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
