#include "menu.h"

Menu::Menu(QWidget *parent) : QGraphicsScene{parent}
{   
    // set background image
    QPixmap bg_img;
    bg_img.load(":/resource/Environment/dirt.png");
    background = new QGraphicsPixmapItem[49];
    QGraphicsPixmapItem *p_background = background;
    for(int i = 0; i < 49; ++i, ++p_background){
        p_background->setPixmap(bg_img);
        this->addItem(p_background);
        p_background->setPos((i % 7) << 7, (i / 7) << 7);
    }

    // set title text
    title_text = new QGraphicsTextItem("Tank Battle");
    title_text->setFont(QFont("KaiTi", 30));
    title_text->setPos(400, 200);
    title_text->setScale(30);

    // set buttons
    QIcon icon_1 = QIcon(":/resource/Button/button_1.png");
    QIcon icon_2 = QIcon(":/resource/Button/button_2.png");

    _m1_btn = new QPushButton(icon_1, "击杀模式");
    m1_btn = this->addWidget(_m1_btn);
    m1_btn->setPos(375, 300);

    _m2_btn = new QPushButton(icon_1, "夺旗模式");
    m2_btn = this->addWidget(_m2_btn);
    m2_btn->setPos(375, 350);

    _m3_btn = new QPushButton(icon_1, "踢球模式");
    m3_btn = this->addWidget(_m3_btn);
    m3_btn->setPos(375, 400);

    _instr_btn = new QPushButton(icon_1, "游戏帮助");
    instr_btn = this->addWidget(_instr_btn);
    instr_btn->setPos(375, 450);

    _set_btn = new QPushButton(icon_1, "游戏设置");
    set_btn = this->addWidget(_set_btn);
    set_btn->setPos(375, 500);

    _exit_btn = new QPushButton(icon_1, "退出游戏");
    exit_btn = this->addWidget(_exit_btn);
    exit_btn->setPos(375, 550);

    // connet signals and slots
    connect(_exit_btn, &QPushButton::clicked, this, &QGraphicsScene::clear);
}


Menu::~Menu()
{
    delete []background;
    delete title_text;
    delete _m1_btn, _m2_btn, _m3_btn;
    delete _instr_btn, _set_btn, _exit_btn;
    delete m1_btn, m2_btn, m3_btn;
    delete instr_btn, set_btn, exit_btn;
}
