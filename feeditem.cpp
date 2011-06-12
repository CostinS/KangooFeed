#include "feeditem.h"
#include "ui_feeditem.h"

FeedItem::FeedItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FeedItem)
{
    Q_INIT_RESOURCE(icons);
    ui->setupUi(this);
    ui->thumbnail->setPixmap(QPixmap(":/icons/play.png"));

}

FeedItem::~FeedItem()
{
    delete ui;
}