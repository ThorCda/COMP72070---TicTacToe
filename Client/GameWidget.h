#pragma once

#include <QWidget>
#include <QPixMap>
#include <string>

#include "ui_GameWidget.h"
#include "ClickableLabel.h"
#include "WidgetNames.h"
#include "CSS.h"

namespace Ui {
    class GameWidget;
}

class GameWidget : public QWidget
{
    Q_OBJECT

public:
    GameWidget(QWidget* parent = nullptr);
    ~GameWidget();
    Ui::GameWidget* GetGameWidgetUI();

signals:
    void SwitchView(WIDGET_VIEW_NAME);
    void Logout();
    //void MakeGameMove(int);
    void setLoginWidgetFocus();

public slots:
    void on_logoutButton_clicked();
    void on_accountButton_clicked();
    void on_newGameButton_clicked();
    //void on_gameBoardLabel_clicked(ClickableLabel*);

//private slots:
    /*void on_gameBoardLabel_clicked(ClickableLabel*);*/

private:
    Ui::GameWidget* ui;
};
