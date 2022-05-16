#ifndef INPUT_H
#define INPUT_H

#include <QWidget>

namespace Ui {
class input;
}

class input : public QWidget
{
    Q_OBJECT

public:
    explicit input(QWidget *parent = nullptr);
    ~input();

private:
    Ui::input *ui;
};

#endif // INPUT_H
