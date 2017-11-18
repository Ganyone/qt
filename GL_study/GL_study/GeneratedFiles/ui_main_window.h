/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_window
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *b_Head_portrait;
    QPushButton *b_1;
    QPushButton *b_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QToolButton *b_3;
    QToolButton *toolButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QWebEngineView *webEngineView_0;
    QWidget *page_2;
    QLabel *label_2;
    QWidget *page_3;
    QWidget *page_4;
    QPushButton *pushButton;
    QWidget *page_5;

    void setupUi(QWidget *main_window)
    {
        if (main_window->objectName().isEmpty())
            main_window->setObjectName(QStringLiteral("main_window"));
        main_window->resize(922, 500);
        main_window->setStyleSheet(QLatin1String(" #main_window{\n"
"border-radius: 10px;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(main_window);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        b_Head_portrait = new QPushButton(main_window);
        b_Head_portrait->setObjectName(QStringLiteral("b_Head_portrait"));
        b_Head_portrait->setMinimumSize(QSize(59, 59));
        b_Head_portrait->setMaximumSize(QSize(59, 59));
        b_Head_portrait->setStyleSheet(QStringLiteral("border:0px;"));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_Head_portrait->setIcon(icon);
        b_Head_portrait->setIconSize(QSize(48, 48));

        verticalLayout->addWidget(b_Head_portrait);

        b_1 = new QPushButton(main_window);
        b_1->setObjectName(QStringLiteral("b_1"));
        b_1->setMaximumSize(QSize(59, 16777215));

        verticalLayout->addWidget(b_1);

        b_2 = new QPushButton(main_window);
        b_2->setObjectName(QStringLiteral("b_2"));
        b_2->setMinimumSize(QSize(59, 0));
        b_2->setMaximumSize(QSize(59, 16777215));

        verticalLayout->addWidget(b_2);

        horizontalSpacer = new QSpacerItem(59, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        b_3 = new QToolButton(main_window);
        b_3->setObjectName(QStringLiteral("b_3"));
        b_3->setMinimumSize(QSize(59, 0));
        b_3->setMaximumSize(QSize(59, 16777215));
        b_3->setStyleSheet(QString::fromUtf8("border:0px;\n"
"font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("Resources/\345\255\246\346\240\241.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_3->setIcon(icon1);
        b_3->setIconSize(QSize(38, 38));
        b_3->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(b_3);

        toolButton = new QToolButton(main_window);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(59, 0));
        toolButton->setMaximumSize(QSize(59, 16777215));
        toolButton->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"border:0px;\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("Resources/\345\256\236\350\267\265\346\225\231\350\202\262\347\256\241\347\220\206.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon2);
        toolButton->setIconSize(QSize(38, 38));
        toolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(toolButton);


        horizontalLayout->addLayout(verticalLayout);

        stackedWidget = new QStackedWidget(main_window);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral("background-color: rgb(245, 245, 245);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        webEngineView_0 = new QWebEngineView(page);
        webEngineView_0->setObjectName(QStringLiteral("webEngineView_0"));
        webEngineView_0->setUrl(QUrl(QStringLiteral("about:blank")));

        verticalLayout_2->addWidget(webEngineView_0);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 230, 221, 131));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        pushButton = new QPushButton(page_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(710, 40, 75, 23));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        stackedWidget->addWidget(page_5);

        horizontalLayout->addWidget(stackedWidget);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(main_window);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(main_window);
    } // setupUi

    void retranslateUi(QWidget *main_window)
    {
        main_window->setWindowTitle(QApplication::translate("main_window", "main_window", Q_NULLPTR));
        b_Head_portrait->setText(QString());
        b_1->setText(QApplication::translate("main_window", "\347\254\254\344\270\200\351\241\265", Q_NULLPTR));
        b_2->setText(QApplication::translate("main_window", "\347\254\254\344\272\214\351\241\265", Q_NULLPTR));
        b_3->setText(QApplication::translate("main_window", "\346\225\231\345\212\241\347\263\273\347\273\237", Q_NULLPTR));
        toolButton->setText(QApplication::translate("main_window", "\345\256\236\350\267\265\344\270\255\345\277\203", Q_NULLPTR));
        label_2->setText(QApplication::translate("main_window", "\347\254\254\344\272\214\351\241\265", Q_NULLPTR));
        pushButton->setText(QApplication::translate("main_window", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class main_window: public Ui_main_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
