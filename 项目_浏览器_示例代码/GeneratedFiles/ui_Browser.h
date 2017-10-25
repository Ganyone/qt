/********************************************************************************
** Form generated from reading UI file 'Browser.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSER_H
#define UI_BROWSER_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BrowserClass
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *TW_qiehuang;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *B_Return;
    QPushButton *B_Forward;
    QPushButton *B_Refresh;
    QLineEdit *LE_wangye;
    QPushButton *B_load;
    QWebEngineView *webEngineView;
    QWidget *tab;

    void setupUi(QDialog *BrowserClass)
    {
        if (BrowserClass->objectName().isEmpty())
            BrowserClass->setObjectName(QStringLiteral("BrowserClass"));
        BrowserClass->resize(899, 724);
        QIcon icon;
        icon.addFile(QStringLiteral("icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        BrowserClass->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(BrowserClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TW_qiehuang = new QTabWidget(BrowserClass);
        TW_qiehuang->setObjectName(QStringLiteral("TW_qiehuang"));
        TW_qiehuang->setStyleSheet(QString::fromUtf8("QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #123456;\n"
"}\n"
"QTabBar::tab\n"
"{\n"
"    height: 27px;\n"
"    min-width: 88px;\n"
"    border: none;\n"
"    margin-left: 5px;\n"
"    color: #999999;\n"
"\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    \n"
"	background-color: rgb(67, 110, 238);\n"
"    font-family: \"Microsoft YaHei\" ,\345\276\256\350\275\257\351\233\205\351\273\221,SimSun,\345\256\213\344\275\223;\n"
"    font-weight: bold;\n"
"    border: 1px solid #bcd7f2;\n"
"    border-top-left-radius: 2px;\n"
"    border-top-right-radius: 2px;\n"
"    color: #666666;\n"
"}\n"
"\n"
"QTabBar::tab:hover:!selected\n"
"{\n"
"    background-image: url(:/images/tabbar_hover.png);\n"
"    border: 1px solid #bcd7f2;\n"
"    border-top-left-radius: 2px;\n"
"    border-top-right-radius: 2px;\n"
"    color: #666666;\n"
"}\n"
"QPushButton {\n"
"    border: 0px;\n"
"}"));
        TW_qiehuang->setIconSize(QSize(32, 32));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        B_Return = new QPushButton(tab_2);
        B_Return->setObjectName(QStringLiteral("B_Return"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(B_Return->sizePolicy().hasHeightForWidth());
        B_Return->setSizePolicy(sizePolicy);
        B_Return->setMinimumSize(QSize(0, 20));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Resources/arrow-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        B_Return->setIcon(icon1);
        B_Return->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(B_Return);

        B_Forward = new QPushButton(tab_2);
        B_Forward->setObjectName(QStringLiteral("B_Forward"));
        sizePolicy.setHeightForWidth(B_Forward->sizePolicy().hasHeightForWidth());
        B_Forward->setSizePolicy(sizePolicy);
        B_Forward->setMinimumSize(QSize(0, 20));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Resources/arrow-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        B_Forward->setIcon(icon2);
        B_Forward->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(B_Forward);

        B_Refresh = new QPushButton(tab_2);
        B_Refresh->setObjectName(QStringLiteral("B_Refresh"));
        sizePolicy.setHeightForWidth(B_Refresh->sizePolicy().hasHeightForWidth());
        B_Refresh->setSizePolicy(sizePolicy);
        B_Refresh->setMinimumSize(QSize(0, 20));
        QIcon icon3;
        icon3.addFile(QStringLiteral("Resources/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        B_Refresh->setIcon(icon3);
        B_Refresh->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(B_Refresh);


        horizontalLayout_2->addLayout(horizontalLayout);

        LE_wangye = new QLineEdit(tab_2);
        LE_wangye->setObjectName(QStringLiteral("LE_wangye"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LE_wangye->sizePolicy().hasHeightForWidth());
        LE_wangye->setSizePolicy(sizePolicy1);
        LE_wangye->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        LE_wangye->setFont(font);

        horizontalLayout_2->addWidget(LE_wangye);

        B_load = new QPushButton(tab_2);
        B_load->setObjectName(QStringLiteral("B_load"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(B_load->sizePolicy().hasHeightForWidth());
        B_load->setSizePolicy(sizePolicy2);
        B_load->setMinimumSize(QSize(80, 30));
        B_load->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(37, 185, 79);\n"
" color:white; \n"
"border:0px;\n"
"}\n"
"QPushButton:hover {\n"
" \n"
"  border-radius: 4px;\n"
"	background-color: rgb(31, 145, 50);\n"
"    \n"
"    \n"
"}\n"
"QPushButton:pressed {\n"
"  padding-left:1px;\n"
"    padding-top:2px;\n"
"}"));

        horizontalLayout_2->addWidget(B_load);


        verticalLayout_2->addLayout(horizontalLayout_2);

        webEngineView = new QWebEngineView(tab_2);
        webEngineView->setObjectName(QStringLiteral("webEngineView"));
        webEngineView->setUrl(QUrl(QStringLiteral("about:blank")));

        verticalLayout_2->addWidget(webEngineView);

        TW_qiehuang->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        TW_qiehuang->addTab(tab, QString());

        verticalLayout->addWidget(TW_qiehuang);


        retranslateUi(BrowserClass);

        TW_qiehuang->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BrowserClass);
    } // setupUi

    void retranslateUi(QDialog *BrowserClass)
    {
        BrowserClass->setWindowTitle(QApplication::translate("BrowserClass", "Browser", 0));
        B_Return->setText(QString());
        B_Forward->setText(QString());
        B_Refresh->setText(QString());
        B_load->setText(QApplication::translate("BrowserClass", "Load", 0));
        TW_qiehuang->setTabText(TW_qiehuang->indexOf(tab_2), QApplication::translate("BrowserClass", "Tab 2", 0));
        TW_qiehuang->setTabText(TW_qiehuang->indexOf(tab), QApplication::translate("BrowserClass", "Tab 1", 0));
    } // retranslateUi

};

namespace Ui {
    class BrowserClass: public Ui_BrowserClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSER_H
