#ifndef SCREEN_WELCOME_H
#define SCREEN_WELCOME_H

#include <QMainWindow>
#include <screen_rob.h>
#include <screen_sim.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Screen_Welcome; }
QT_END_NAMESPACE

class Screen_Welcome : public QMainWindow
{
    Q_OBJECT

public:
    Screen_Welcome(QWidget *parent = nullptr);
    ~Screen_Welcome();

private slots:

    void on_butt_Rob_clicked();

    void on_butt_Sym_clicked();

    void on_butt_Exit_clicked();

    void moveHome();

private:
    Ui::Screen_Welcome *ui;
    screen_rob ScrRob;
    screen_sim ScrSim;
};
#endif // SCREEN_WELCOME_H
