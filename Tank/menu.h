#ifndef MENU_H
#define MENU_H

#include <QFont>
#include <QPushButton>
#include <QIcon>
#include <QGraphicsProxyWidget>
#include <QMouseEvent>

#include "gamescene.h"

class Menu: public QGraphicsScene
{
    Q_OBJECT
public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

    // buttons:
    // mode 1-3 button, instruction button, setting button, exit button
    QPushButton *_m1_btn, *_m2_btn, *_m3_btn;
    QPushButton *_instr_btn, *_set_btn, *_exit_btn;

    QGraphicsProxyWidget *m1_btn, *m2_btn, *m3_btn;
    QGraphicsProxyWidget *instr_btn, *set_btn, *exit_btn;

//    void mousePressEvent(QMouseEvent *event);

private:
    QGraphicsPixmapItem *background;

    QGraphicsTextItem *title_text;

signals:

};

#endif // MENU_H
