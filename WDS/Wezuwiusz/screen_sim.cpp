#include "screen_sim.h"
#include "ui_screen_sim.h"


screen_sim::screen_sim(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::screen_sim)
{
    ui->setupUi(this);
    timer_lava = new QTimer(this);
    timer_mice = new QTimer(this);
    connect(timer_lava,
            SIGNAL(timeout()),
            this,
            SLOT(lava_stoper_bar()));
    connect(timer_mice,
            SIGNAL(timeout()),
            this,
            SLOT(mice_stoper()));
    ui->butt_Stop->setVisible(true);
   // QListWidgetItem item = new QListWidgetItem(QIcon("O"));

}

screen_sim::~screen_sim()
{
    delete ui;
}

void screen_sim::mice_stoper()
{
    int a;
    a = ui->LCD_Stoper->value();
    a++;
    ui->LCD_Stoper->display(a);
}

void screen_sim::lava_stoper_bar()
{
    int a;
    a = ui->bar_Lava->value();
    a++;
    ui->bar_Lava->setValue(a);
    if(a==10){
        ui->label_LavaBar->setText("RUN");
    }
}

void screen_sim::on_chB_Izom_stateChanged(int arg1)
{
    if(arg1==2)
        ui->label->setText("Izometric camera");
    else if(arg1==0) ui->label->setText("Camera reset");
}

void screen_sim::on_chB_Road_stateChanged(int arg1)
{
    if(arg1==2)
        ui->label->setText("Road camera");
    else if(arg1==0) ui->label->setText("Camera reset");
}

void screen_sim::on_chB_Follow_stateChanged(int arg1)
{
    if(arg1==2)
        ui->label->setText("Follow camera");
    else if(arg1==0) ui->label->setText("Camera reset");
}

void screen_sim::on_butt_Reset_clicked()
{
    ui->label->setText("Reset clicked");
    timer_lava->stop();
    timer_mice->stop();
    ui->LCD_Stoper->display(0);
    ui->bar_Lava->setValue(0);
}

void screen_sim::on_butt_Start_clicked()
{
    ui->label->setText("Start clicked");
    timer_lava->start(1000);
    timer_mice->start(1000);
}

void screen_sim::on_butt_Stop_clicked()
{
    ui->label->setText("Stop was clicked");
    timer_lava->stop();
    timer_mice->stop();
    ui->butt_Start->setText("Continue");
}

void screen_sim::on_spin_SimSpeed_valueChanged(int arg1)
{
    ui->spin_SimSpeed->setRange(0,10);
    if(arg1>1)
        ui->label->setText("Simulation accelerated");
    else if(arg1<1)
        ui->label->setText("Simulation slowed");
}


void screen_sim::on_butt_ChangeMode_clicked()
{
    emit HomeClicked();
}
