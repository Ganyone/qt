/********************************************************************************
** Form generated from reading UI file 'liulangqi.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIULANGQI_H
#define UI_LIULANGQI_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_liulangqiClass
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *w_haha;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *l_jaizai;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *b_zuixiaohua;
    QPushButton *b_close;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *b_load;
    QWebEngineView *webEngineView;

    void setupUi(QWidget *liulangqiClass)
    {
        if (liulangqiClass->objectName().isEmpty())
            liulangqiClass->setObjectName(QStringLiteral("liulangqiClass"));
        liulangqiClass->resize(906, 712);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        liulangqiClass->setFont(font);
        horizontalLayout = new QHBoxLayout(liulangqiClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        w_haha = new QWidget(liulangqiClass);
        w_haha->setObjectName(QStringLiteral("w_haha"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(w_haha->sizePolicy().hasHeightForWidth());
        w_haha->setSizePolicy(sizePolicy);
        w_haha->setFont(font);
        w_haha->setStyleSheet(QLatin1String("#w_haha{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton{\n"
"border-radius: 4px;\n"
"border:0px;\n"
"}"));
        verticalLayout = new QVBoxLayout(w_haha);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        l_jaizai = new QLabel(w_haha);
        l_jaizai->setObjectName(QStringLiteral("l_jaizai"));
        l_jaizai->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(l_jaizai);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        b_zuixiaohua = new QPushButton(w_haha);
        b_zuixiaohua->setObjectName(QStringLiteral("b_zuixiaohua"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(b_zuixiaohua->sizePolicy().hasHeightForWidth());
        b_zuixiaohua->setSizePolicy(sizePolicy1);
        b_zuixiaohua->setMinimumSize(QSize(30, 30));
        b_zuixiaohua->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"	background-color: rgb(24, 47, 255);\n"
"border:0px;\n"
"}\n"
"QPushButton:pressed {\n"
"  padding-left:1px;\n"
"    padding-top:2px;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/subtract.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_zuixiaohua->setIcon(icon);

        horizontalLayout_3->addWidget(b_zuixiaohua);

        b_close = new QPushButton(w_haha);
        b_close->setObjectName(QStringLiteral("b_close"));
        sizePolicy1.setHeightForWidth(b_close->sizePolicy().hasHeightForWidth());
        b_close->setSizePolicy(sizePolicy1);
        b_close->setMinimumSize(QSize(30, 30));
        b_close->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"background-color: rgb(255, 25, 113);\n"
"border:0px;\n"
"}\n"
"QPushButton:pressed {\n"
"  padding-left:1px;\n"
"    padding-top:2px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Resources/close (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        b_close->setIcon(icon1);

        horizontalLayout_3->addWidget(b_close);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(w_haha);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);
        lineEdit->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(lineEdit);

        b_load = new QPushButton(w_haha);
        b_load->setObjectName(QStringLiteral("b_load"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(b_load->sizePolicy().hasHeightForWidth());
        b_load->setSizePolicy(sizePolicy3);
        b_load->setMinimumSize(QSize(80, 0));
        b_load->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout_2->addWidget(b_load);


        verticalLayout->addLayout(horizontalLayout_2);

        webEngineView = new QWebEngineView(w_haha);
        webEngineView->setObjectName(QStringLiteral("webEngineView"));
        webEngineView->setStyleSheet(QStringLiteral(""));
        webEngineView->setUrl(QUrl(QStringLiteral("about:blank")));

        verticalLayout->addWidget(webEngineView);


        horizontalLayout->addWidget(w_haha);


        retranslateUi(liulangqiClass);
        QObject::connect(b_close, SIGNAL(clicked()), liulangqiClass, SLOT(close()));
        QObject::connect(b_zuixiaohua, SIGNAL(clicked()), liulangqiClass, SLOT(showMinimized()));

        QMetaObject::connectSlotsByName(liulangqiClass);
    } // setupUi

    void retranslateUi(QWidget *liulangqiClass)
    {
        liulangqiClass->setWindowTitle(QApplication::translate("liulangqiClass", "liulangqi", 0));
        l_jaizai->setText(QString());
        b_zuixiaohua->setText(QString());
        b_close->setText(QString());
        lineEdit->setText(QString());
        b_load->setText(QApplication::translate("liulangqiClass", "load", 0));
    } // retranslateUi

};

namespace Ui {
    class liulangqiClass: public Ui_liulangqiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIULANGQI_H
