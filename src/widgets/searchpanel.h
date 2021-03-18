#ifndef SEARCHPANEL_H
#define SEARCHPANEL_H

#include <QFrame>

namespace vnotex
{
    class TitleBar;

    class SearchPanel : public QFrame
    {
        Q_OBJECT
    public:
        explicit SearchPanel(QWidget *p_parent = nullptr);

    private:
        void setupUI();

        TitleBar *setupTitleBar(const QString &p_title, QWidget *p_parent = nullptr);
    };
}

#endif // SEARCHPANEL_H
