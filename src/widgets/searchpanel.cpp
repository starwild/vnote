#include "searchpanel.h"

#include <QVBoxLayout>
#include <QToolButton>
#include <QLabel>

#include "widgetsfactory.h"
#include "titlebar.h"

using namespace vnotex;

SearchPanel::SearchPanel(QWidget *p_parent)
    : QFrame(p_parent)
{
    setupUI();
}

void SearchPanel::setupUI()
{
    auto mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->setSpacing(0);

    {
        auto titleBar = setupTitleBar(QString(), this);
        mainLayout->addWidget(titleBar);
    }
}

TitleBar *SearchPanel::setupTitleBar(const QString &p_title, QWidget *p_parent)
{
    auto titleBar = new TitleBar(p_title, false, TitleBar::Action::None, p_parent);

    {
        auto btn = titleBar->addActionButton(QStringLiteral("search.svg"), tr("Search"));
        connect(btn, &QToolButton::triggered,
                this, [this](QAction *p_act) {
                });
    }

    return titleBar;
}
