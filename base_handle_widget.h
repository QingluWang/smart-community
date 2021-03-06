#ifndef BASEHANDLEWIDGET_H
#define BASEHANDLEWIDGET_H

#include <QLabel>
#include <QObject>
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

class BaseHandleWidget : public QWidget
{
    Q_OBJECT
public:
    explicit BaseHandleWidget(QWidget *parent = 0);
protected:
    QPushButton* enter_btn;
    QPushButton* clear_btn;
    QHBoxLayout* b_layout;
    QVBoxLayout* layout;
    void init();
protected slots:
    void enter();
    void clear();
};

#endif // BASEHANDLEWIDGET_H
