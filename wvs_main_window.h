#ifndef WVS_MAIN_WINDOW_H
#define WVS_MAIN_WINDOW_H

#include <QMainWindow>

namespace Ui {
class wvs_main_window;
}

class wvs_main_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit wvs_main_window(QWidget *parent = 0);
    ~wvs_main_window();

private:
    Ui::wvs_main_window *ui;
};

#endif // WVS_MAIN_WINDOW_H